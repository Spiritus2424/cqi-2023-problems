#include <pthread.h>
#include <stdlib.h>

#include "filter.h"
#include "log.h"
#include "pipeline.h"
#include "queue.h"

#define MAX_QUEUE 6
#define MAX_QUEUE_SIZE 16
typedef struct image_info {
    image_dir_t* image_dir;
    image_t* image;
} image_info_t;

bool init_mutex();

void init_queues();

void start_threads(pthread_t* threads, int* thread_args, void** filter_funcs);

void join_threads(pthread_t* threads);

void push_load_image_next(image_dir_t* image_dir);

void destroy_queues();

void destroy_mutex();

void* load_image(void* args);

void* scale_up(void* args);

void* rgb_to_hsv(void* args);

void* add_pixel(void* args);

void* hsv_to_rgb(void* args);

void* save(void* args);

queue_t* queues[MAX_QUEUE];
pthread_mutex_t lock_loading_image_dir;
pthread_mutex_t lock_add_pixel;

int pipeline_pthread(image_dir_t* image_dir) {
    if (init_mutex()) {
        printf("\n mutex init failed\n");
        return 1;
    }
    init_queues();
    pthread_t threads[MAX_QUEUE];
    int thread_args[MAX_QUEUE];
    void* filter_funcs[MAX_QUEUE] = {load_image, scale_up, rgb_to_hsv, add_pixel, hsv_to_rgb, save};
    start_threads(threads, thread_args, filter_funcs);
    push_load_image_next(image_dir);
    join_threads(threads);
    destroy_queues();
    destroy_mutex();
    printf("\n");
    return 0;
}

bool init_mutex() {
    return (pthread_mutex_init(&lock_loading_image_dir, NULL) != 0 || pthread_mutex_init(&lock_add_pixel, NULL) != 0);
}

void init_queues() {
    for (int i = 0; i < MAX_QUEUE; ++i) {
        queues[i] = queue_create(MAX_QUEUE_SIZE);
    }
}

void start_threads(pthread_t* threads, int* thread_args, void** filter_funcs) {
    for (int i = 0; i < MAX_QUEUE; ++i) {
        thread_args[i] = i;
        pthread_create(&threads[i], NULL, filter_funcs[i], (void*)&thread_args[i]);
    }
}

void join_threads(pthread_t* threads) {
    for (int i = 0; i < MAX_QUEUE; ++i) {
        pthread_join(threads[i], NULL);
    }
}

void push_load_image_next(image_dir_t* image_dir) {
    image_info_t* image_info = malloc(sizeof(image_info_t));
    image_info->image_dir    = image_dir;

    pthread_mutex_lock(&lock_loading_image_dir);
    image_info->image = image_dir_load_next(image_info->image_dir);
    pthread_mutex_unlock(&lock_loading_image_dir);

    queue_push(queues[0], image_info);
}

void destroy_queues() {
    for (int i = 0; i < MAX_QUEUE; ++i) {
        queue_destroy(queues[i]);
    }
}

void destroy_mutex() {
    pthread_mutex_destroy(&lock_loading_image_dir);
    pthread_mutex_destroy(&lock_add_pixel);
}

void* load_image(void* args) {
    int index = *((int*)args);
    image_info_t* image_info;
    while ((image_info = queue_pop(queues[index]))->image != NULL) {
        queue_push(queues[index + 1], image_info);
        push_load_image_next(image_info->image_dir);
    }
    queue_push(queues[index + 1], image_info);
    pthread_exit(NULL);
}

void* scale_up(void* args) {
    int index = *((int*)args);
    image_info_t* image_info;
    image_t* old_image;
    while ((image_info = queue_pop(queues[index]))->image != NULL) {
        old_image         = image_info->image;
        image_info->image = filter_scale_up(old_image, 2);
        image_destroy(old_image);
        queue_push(queues[index + 1], image_info);
    }
    queue_push(queues[index + 1], image_info);
    pthread_exit(NULL);
}

void* rgb_to_hsv(void* args) {
    int index = *((int*)args);
    image_info_t* image_info;
    image_t* old_image;
    while ((image_info = queue_pop(queues[index]))->image != NULL) {
        old_image         = image_info->image;
        image_info->image = filter_to_hsv(old_image);
        image_destroy(old_image);
        queue_push(queues[index + 1], image_info);
    }
    queue_push(queues[index + 1], image_info);
    pthread_exit(NULL);
}

void* add_pixel(void* args) {
    pixel_t pixel = {.bytes = {0, 0, 0, 0}};
    int index     = *((int*)args);
    image_info_t* image_info;
    image_t* old_image;
    while ((image_info = queue_pop(queues[index]))->image != NULL) {
        pthread_mutex_lock(&lock_add_pixel);
        pixel.bytes[0] += 4;
        pthread_mutex_unlock(&lock_add_pixel);

        old_image         = image_info->image;
        image_info->image = filter_add_pixel(old_image, &pixel);
        image_destroy(old_image);
        queue_push(queues[index + 1], image_info);
    }
    queue_push(queues[index + 1], image_info);
    pthread_exit(NULL);
}

void* hsv_to_rgb(void* args) {
    int index = *((int*)args);
    image_info_t* image_info;
    image_t* old_image;
    while ((image_info = queue_pop(queues[index]))->image != NULL) {
        old_image         = image_info->image;
        image_info->image = filter_to_rgb(old_image);
        image_destroy(old_image);
        queue_push(queues[index + 1], image_info);
    }
    queue_push(queues[index + 1], image_info);
    pthread_exit(NULL);
}

void* save(void* args) {
    int index = *((int*)args);
    image_info_t* image_info;
    while ((image_info = queue_pop(queues[index]))->image != NULL) {
        image_dir_save(image_info->image_dir, image_info->image);

        printf(".");
        fflush(stdout);

        image_destroy(image_info->image);
        free(image_info);
    }
    pthread_exit(NULL);
}

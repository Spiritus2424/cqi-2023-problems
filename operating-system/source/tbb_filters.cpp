#include <tbb/pipeline.h>
#include <cstdio>

extern "C" {

#include "tbb_filters/add_filter.h"
#include "tbb_filters/hsv_to_rgb_filter.h"
#include "tbb_filters/load_filter.h"
#include "tbb_filters/rgb_to_hsv_filter.h"
#include "tbb_filters/save_filter.h"
#include "tbb_filters/scale_up_filter.h"

#include "filter.h"
#include "image.h"

image_t* LoadFilter::operator()(tbb::flow_control& fc) const {
    image_t* image = image_dir_load_next(m_image_dir);

    if (image == NULL) {
        fc.stop();
        return NULL;
    }

    return image;
}

void SaveFilter::operator()(image_t* image) const {
    if (image == NULL)
        return;

    image_dir_save(m_image_dir, image);

    printf(".");
    fflush(stdout);

    image_destroy(image);
}

image_t* AddFilter::operator()(image_t* image) const {
    if (image == NULL)
        return NULL;

    add_pixel.bytes[0] += 4;

    image_t* add_image = filter_add_pixel(image, &add_pixel);

    image_destroy(image);
    return add_image;
}

image_t* ScaleUpFilter::operator()(image_t* image) const {
    if (image == NULL)
        return NULL;

    image_t* scaled_image = filter_scale_up(image, scaleFactor);

    image_destroy(image);
    return scaled_image;
}

image_t* RgbToHsvFilter::operator()(image_t* image) const {
    if (image == NULL)
        return NULL;

    image_t* hsv_image = filter_to_hsv(image);

    image_destroy(image);
    return hsv_image;
}

image_t* HsvToRgbFilter::operator()(image_t* image) const {
    if (image == NULL)
        return NULL;

    image_t* rgb_image = filter_to_rgb(image);

    image_destroy(image);
    return rgb_image;
}
}
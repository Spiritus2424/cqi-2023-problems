#include <tbb/pipeline.h>
#include <cstdio>

extern "C" {

#include "image.h"
#include "pipeline.h"

#include "tbb_filters/add_filter.h"
#include "tbb_filters/hsv_to_rgb_filter.h"
#include "tbb_filters/load_filter.h"
#include "tbb_filters/rgb_to_hsv_filter.h"
#include "tbb_filters/save_filter.h"
#include "tbb_filters/scale_up_filter.h"

int pipeline_tbb(image_dir_t* image_dir) {
    tbb::parallel_pipeline(SIZE_MAX,
                           tbb::make_filter<void, image_t*>(tbb::filter::serial, LoadFilter(image_dir)) &
                               tbb::make_filter<image_t*, image_t*>(tbb::filter::parallel, ScaleUpFilter()) &
                               tbb::make_filter<image_t*, image_t*>(tbb::filter::parallel, RgbToHsvFilter()) &
                               tbb::make_filter<image_t*, image_t*>(tbb::filter::serial, AddFilter()) &
                               tbb::make_filter<image_t*, image_t*>(tbb::filter::parallel, HsvToRgbFilter()) &
                               tbb::make_filter<image_t*, void>(tbb::filter::parallel, SaveFilter(image_dir)));

    printf("\n");

    return 0;
}
} /* extern "C" */

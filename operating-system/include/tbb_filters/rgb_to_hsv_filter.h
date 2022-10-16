#ifndef INCLUDE_TBB_FILTERS_RGB_TO_HSV_H_
#define INCLUDE_TBB_FILTERS_RGB_TO_HSV_H_

#include "image.h"

class RgbToHsvFilter {
   public:
    image_t* operator()(image_t* image) const;
};

#endif /* INCLUDE_TBB_FILTERS_RGB_TO_HSV_H_ */
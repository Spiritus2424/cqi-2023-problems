#ifndef INCLUDE_TBB_FILTERS_HSV_TO_RGB_H_
#define INCLUDE_TBB_FILTERS_HSV_TO_RGB_H_

#include "image.h"

class HsvToRgbFilter {
   public:
    image_t* operator()(image_t* image) const;
};

#endif /* INCLUDE_TBB_FILTERS_HSV_TO_RGB_H_ */
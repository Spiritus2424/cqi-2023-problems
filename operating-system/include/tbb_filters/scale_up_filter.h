#ifndef INCLUDE_TBB_FILTERS_SCALE_UP_H_
#define INCLUDE_TBB_FILTERS_SCALE_UP_H_

#include "image.h"

class ScaleUpFilter {
   private:
    const size_t scaleFactor = 2;

   public:
    image_t* operator()(image_t* image) const;
};

#endif /* INCLUDE_TBB_FILTERS_SCALE_UP_H_ */
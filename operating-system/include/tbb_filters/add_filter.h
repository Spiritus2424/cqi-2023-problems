#ifndef INCLUDE_TBB_FILTERS_ADD_H_
#define INCLUDE_TBB_FILTERS_ADD_H_

#include "image.h"

class AddFilter {
   private:
    mutable pixel_t add_pixel = {.bytes = {0, 0, 0, 0}};

   public:
    image_t* operator()(image_t* image) const;
};

#endif /* INCLUDE_TBB_FILTERS_ADD_H_ */
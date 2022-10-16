#ifndef INCLUDE_TBB_FILTERS_SAVE_H_
#define INCLUDE_TBB_FILTERS_SAVE_H_

#include "image.h"

class SaveFilter {
   private:
    image_dir_t* m_image_dir;

   public:
    SaveFilter(image_dir_t* image_dir) : m_image_dir(image_dir) {}

    void operator()(image_t* image) const;
};

#endif /* INCLUDE_TBB_FILTERS_SAVE_H_ */
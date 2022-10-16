#ifndef INCLUDE_TBB_FILTERS_LOAD_H_
#define INCLUDE_TBB_FILTERS_LOAD_H_

#include <tbb/pipeline.h>
#include "image.h"

class LoadFilter {
   private:
    image_dir_t* m_image_dir;

   public:
    LoadFilter(image_dir_t* image_dir) : m_image_dir(image_dir){};

    image_t* operator()(tbb::flow_control& fc) const;
};

#endif /* INCLUDE_TBB_FILTERS_LOAD_H_ */
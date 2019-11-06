#ifndef CSGAMES_EXAM_2019_DEBUG_GREATSONG_H
#define CSGAMES_EXAM_2019_DEBUG_GREATSONG_H


#include "Song.h"

class GreatSong : Song {
public:
    GreatSong(const std::string &name, const std::string &lyrics);

    std::string sing() const override;
};


#endif //CSGAMES_EXAM_2019_DEBUG_GREATSONG_H

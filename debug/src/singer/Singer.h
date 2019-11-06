#ifndef CSGAMES_EXAM_2019_DEBUG_SINGER_H
#define CSGAMES_EXAM_2019_DEBUG_SINGER_H

#include <string>
#include "../song/Song.h"

#define NO_SONG_MESSAGE "It's not my song right now"

class Singer {
public:
    void setProposedSong(const Song *proposedSong);
    bool omgItsMySooooong(const Song *song) const;
    std::string sing() const;
private:
    const Song* _proposedSong = nullptr;
};


#endif //CSGAMES_EXAM_2019_DEBUG_SINGER_H

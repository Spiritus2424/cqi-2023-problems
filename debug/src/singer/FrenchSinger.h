#define CSGAMES_EXAM_2019_DEBUG_FRENCHSINGER_H


#include "Singer.h"

#define FRANCAIS_DE_FRANCE "???"

class FrenchSinger : public Singer {
public:
    virtual std::string sing() const;
};
//
// Created by Elias Aggergaard Larsen on 12/08/2024.
//

#ifndef ROGUEOBJCT_H
#define ROGUEOBJCT_H
#include "EngineBase/DrawAbleObject.h"


class RogueObject {
public:
    RogueObject();
    DrawAbleObject* getDrawAble();
private:
    DrawAbleObject mDrawAble;
};



#endif //ROGUEOBJCT_H

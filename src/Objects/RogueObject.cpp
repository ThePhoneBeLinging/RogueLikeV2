//
// Created by Elias Aggergaard Larsen on 12/08/2024.
//

#include "Objects/RogueObject.h"

RogueObject::RogueObject() : mDrawAble(DrawAbleObject(0,0,0,0))
{
}

DrawAbleObject* RogueObject::getDrawAble()
{
    return &mDrawAble;
}

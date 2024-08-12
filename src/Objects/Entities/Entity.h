//
// Created by Elias Aggergaard Larsen on 12/08/2024.
//

#ifndef ENTITY_H
#define ENTITY_H
#include "Objects/RogueObject.h"

class Entity : public RogueObject
{
public:
    Entity(int hp);
    int getHP() const;
    void damage(int damage);
private:
    int maxHP;
    int mHP;
};



#endif //ENTITY_H

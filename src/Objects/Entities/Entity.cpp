//
// Created by Elias Aggergaard Larsen on 12/08/2024.
//

#include "Entity.h"

Entity::Entity(int hp) : RogueObject(), maxHP(hp) ,mHP(hp)
{
}

int Entity::getHP() const
{
    return mHP;
}

void Entity::damage(int damage)
{
    this->mHP -= damage;
    if (this->mHP < 0) this->mHP = 0;
}

//
// Created by adel0 on 15/08/2024.
//

#include "Ability.h"

Ability::Ability(int cooldown) : cooldownTimer(cooldown)
{
}

void Ability::use()
{
    cooldownTimer.start();
}

bool Ability::isReady()
{
    if(cooldownTimer.milliSecondsLeft()!=0)
    {
        return false;
    }else{
        return true;
    }
}
//
// Created by adel0 on 15/08/2024.
//

#include "Ability.h"

Ability::Ability(int cooldown) : mCooldownTimer(cooldown)
{
}

void Ability::use()
{
    mCooldownTimer.start();
}

bool Ability::isReady()
{
    if(mCooldownTimer.milliSecondsLeft()!=0)
    {
        return false;
    }else{
        return true;
    }
}
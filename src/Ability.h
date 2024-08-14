//
// Created by adel0 on 15/08/2024.
//

#ifndef ROGUELIKEV2_ABILITY_H
#define ROGUELIKEV2_ABILITY_H

#include <Utility/Timer.h>

class Ability {
public:
    Ability(int cooldown);
    void use();
    bool isReady() ;
    Timer mCooldownTimer;
};


#endif //ROGUELIKEV2_ABILITY_H

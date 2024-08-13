//
// Created by Elias Aggergaard Larsen on 12/08/2024.
//

#include "RogueLikeV2.h"

#include <iostream>
#include <EngineBase/EngineBase.h>
#include <EngineBase/HotKeyManager.h>

void RogueLikeV2::launch()
{
    std::cout << "Application Starting" << std::endl;
    while (!EngineBase::shouldAppClose())
    {
        HotKeyManager::handleHotKeys();
        //Main loop
    }
}

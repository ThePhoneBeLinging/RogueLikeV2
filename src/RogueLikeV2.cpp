//
// Created by Elias Aggergaard Larsen on 12/08/2024.
//

#include "RogueLikeV2.h"
#include "Utility/Timer.h"

#include <iostream>
#include <EngineBase/EngineBase.h>
#include <EngineBase/HotKeyManager.h>

void RogueLikeV2::launch()
{
    std::cout << "Application Starting" << std::endl;

    loadInitialTextures();
    auto loopKeeper = Timer(33);
    loopKeeper.start();
    while (!EngineBase::shouldAppClose())
    {
        if (loopKeeper.milliSecondsLeft() != 0)
        {
            continue;
        }
        loopKeeper.start();

        HotKeyManager::handleHotKeys();
    }
}

void RogueLikeV2::loadInitialTextures()
{
    EngineBase::addTexture("Resources/Images/BBishop.png",2,0);
    EngineBase::addTexture("Resources/Images/BKing.png",2,1);
    EngineBase::addTexture("Resources/Images/WBishop.png",2,2);
    EngineBase::addTexture("Resources/Images/WKing.png",2,3);
    EngineBase::addTexture("Resources/Images/player.png",1,0);
}

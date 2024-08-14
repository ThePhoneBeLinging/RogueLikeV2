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

    loadInitialTextures();

    while (!EngineBase::shouldAppClose())
    {
        //Main loop
        HotKeyManager::handleHotKeys();
    }
}

void RogueLikeV2::loadInitialTextures()
{
    EngineBase::addTexture("Resources/Images/BBishop.png",0,0);
    EngineBase::addTexture("Resources/Images/BKing.png",0,1);
    EngineBase::addTexture("Resources/Images/WBishop.png",0,2);
    EngineBase::addTexture("Resources/Images/WKing.png",0,3);
}

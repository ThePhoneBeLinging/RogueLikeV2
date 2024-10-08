//
// Created by Elias Aggergaard Larsen on 12/08/2024.
//

#include "RogueLikeV2.h"
#include "Utility/Timer.h"

#include <iostream>
#include <EngineBase/DrawAbleObject.h>
#include <EngineBase/EngineBase.h>
#include <EngineBase/HotKeyManager.h>

#include "Objects/Entities/Player.h"

void RogueLikeV2::launch()
{
    std::cout << "Application Starting" << std::endl;

    auto testObject = DrawAbleObject(200, 200, 50, 50);
    testObject.mTextureManager.setFramesPerAnimationFrame(200);
    testObject.mTextureManager.setTextureIndex(2);
    testObject.mTextureManager.setAnimationEndIndex(4);
    testObject.addToScene(0);
    testObject.mCollisionManager.setCollisionMode(CollisionMode::HandleElseWhere);
    loadInitialTextures();
    Player player = Player();
    EngineBase::setObjectToFollow(player.getDrawAble());
    player.getDrawAble()->mCollisionManager.setCollisionMode(Collide);

    auto updateFunction = []()
    {
        std::cout << "Updating" << std::endl;
    };
    EngineBase::attachUpdateFunction(updateFunction,30);
}

void RogueLikeV2::loadInitialTextures()
{
    EngineBase::addTexture("Resources/Images/BBishop.png", 2, 0);
    EngineBase::addTexture("Resources/Images/BKing.png", 2, 1);
    EngineBase::addTexture("Resources/Images/WBishop.png", 2, 2);
    EngineBase::addTexture("Resources/Images/WKing.png", 2, 3);
    EngineBase::addTexture("Resources/Images/player.png", 1, 0);
}

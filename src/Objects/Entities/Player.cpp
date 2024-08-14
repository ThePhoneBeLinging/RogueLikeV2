//
// Created by Elias Aggergaard Larsen on 12/08/2024.
//

#include "Player.h"
#include <EngineBase/HotKeyManager.h>

Player::Player() : Entity(50)
{
    this->mDrawAble.setWidth(50);
    this->mDrawAble.setHeight(50);
    this->mDrawAble.setX(200);
    this->mDrawAble.setY(200);
    this->mDrawAble.mTextureManager.setTextureIndex(1);
    this->mDrawAble.addToScene(0);
    HotKeyManager::addOnKeyPress(KEY_A, [this](){
        this->mDrawAble.setX(this->mDrawAble.getX() - 3);
    }, TriggerContinuously);
    HotKeyManager::addOnKeyPress(KEY_D, [this](){
        this->mDrawAble.setX(this->mDrawAble.getX() + 3);
    }, TriggerContinuously);
    HotKeyManager::addOnKeyPress(KEY_W, [this](){
        this->mDrawAble.setY(this->mDrawAble.getY() - 3);
    }, TriggerContinuously);
    HotKeyManager::addOnKeyPress(KEY_S, [this](){
        this->mDrawAble.setY(this->mDrawAble.getY() + 3);
    }, TriggerContinuously);

}


//
// Created by Elias Aggergaard Larsen on 12/08/2024.
//

#include "Player.h"
#include <EngineBase/HotKeyManager.h>
///TODO Update HP
Player::Player() : Entity(50)
{
    this->mDrawAble.setWidth(50);
    this->mDrawAble.setHeight(50);
    //
    // x and y on the player must be set to 0, as the camera is using this value to offset other objects
    //
    this->mDrawAble.setX(0);
    this->mDrawAble.setY(0);
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


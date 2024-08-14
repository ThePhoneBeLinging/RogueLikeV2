#include <thread>
#include <EngineBase/DrawAbleObject.h>
#include <EngineBase/EngineBase.h>

#include "RogueLikeV2.h"

int main()
{
    EngineBase::addTexture("../Resources/Images/BBishop.png",0,0);
    EngineBase::addTexture("../Resources/Images/BKing.png",0,1);
    EngineBase::addTexture("../Resources/Images/WBishop.png",0,2);
    EngineBase::addTexture("../Resources/Images/WKing.png",0,3);
    auto testObject = new DrawAbleObject(50,50,50,50);
    testObject->mTextureManager.setFramesPerAnimationFrame(200);
    testObject->mTextureManager.setAnimationEndIndex(4);
    testObject->addToScene(0);
    EngineBase::toggleFPSCounter();

    auto main = std::thread(RogueLikeV2::launch);
    EngineBase::startGUI();
    main.join();
    return 0;
}

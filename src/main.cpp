#include <thread>
#include <EngineBase/DrawAbleObject.h>
#include <EngineBase/EngineBase.h>
#include "Objects/Entities/Player.h"

#include "RogueLikeV2.h"

int main()
{
    auto testObject = new DrawAbleObject(50,50,50,50);
    testObject->mTextureManager.setFramesPerAnimationFrame(200);
    testObject->mTextureManager.setAnimationEndIndex(4);
    testObject->addToScene(0);
    EngineBase::toggleFPSCounter();

    Player player = Player();
    EngineBase::setObjectToFollow(player.getDrawAble());
    auto main = std::thread(RogueLikeV2::launch);
    EngineBase::startGUI();
    main.join();
    return 0;
}

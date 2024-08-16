#include <thread>
#include <EngineBase/DrawAbleObject.h>
#include <EngineBase/EngineBase.h>
#include "Objects/Entities/Player.h"

#include "RogueLikeV2.h"

int main()
{
    EngineBase::toggleFPSCounter();
    auto main = std::thread(RogueLikeV2::launch);
    EngineBase::startGUI();
    main.join();
    return 0;
}

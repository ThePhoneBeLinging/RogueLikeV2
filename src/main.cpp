#include <thread>
#include <EngineBase/EngineBase.h>

#include "RogueLikeV2.h"

int main()
{
    auto main = std::thread(RogueLikeV2::launch);
    EngineBase::startGUI();
    main.join();
    return 0;
}

cmake_minimum_required(VERSION 3.28)
project(RogueLikeV2)

set(CMAKE_CXX_STANDARD 20)
add_executable(RogueLikeV2
        src/main.cpp
        src/RogueLikeV2.cpp
        src/RogueLikeV2.h
        src/Objects/Entities/Player.cpp
        src/Objects/Entities/Player.h
        src/Objects/RogueObject.cpp
        src/Objects/RogueObject.h
        src/Objects/Entities/Entity.cpp
        src/Objects/Entities/Entity.h
)
include_directories(src)

include(FetchContent)
FetchContent_Declare(
        EngineBase
        GIT_REPOSITORY https://github.com/ThePhoneBeLinging/EngineBase.git
        GIT_TAG main
)
FetchContent_MakeAvailable(EngineBase)

target_include_directories(RogueLikeV2 PUBLIC
        src
)
target_link_libraries(RogueLikeV2 PUBLIC EngineBase)

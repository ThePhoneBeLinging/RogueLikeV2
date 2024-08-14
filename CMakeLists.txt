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

add_subdirectory(dependencies/Utility)
add_subdirectory(dependencies/EngineBase)
target_link_libraries(RogueLikeV2 PUBLIC
        Utility
        EngineBase
)
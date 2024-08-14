cmake_minimum_required(VERSION 3.28)
project(RogueLikeV2)

set(CMAKE_CXX_STANDARD 20)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Resources
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

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
        src/Ability.cpp
        src/Ability.h
        src/Ability.h
        src/Ability.h
)
include_directories(src)

add_subdirectory(dependencies/Utility)
add_subdirectory(dependencies/EngineBase)
target_link_libraries(RogueLikeV2 PUBLIC
        Utility
        EngineBase
)
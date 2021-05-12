cmake_minimum_required(VERSION 3.10)

# set the project name
project(Indie VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include /usr/local/include)

find_package(SFML 2.5.1 COMPONENTS audio graphics window system REQUIRED)

# add the executable
add_executable(
    Indie
    src/character.cpp
    src/game.cpp
    src/input.cpp
    src/main.cpp
    include/character.hpp
    include/direction.hpp
    include/game.hpp
)
target_link_libraries(Indie sfml-audio sfml-graphics sfml-window sfml-system)

# Copy dlls to build
if(WIN32)
    file(GLOB BINARY_DEP_DLLS "c:/Program Files/SFML/bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif()
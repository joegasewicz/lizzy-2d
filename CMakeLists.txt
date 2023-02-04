cmake_minimum_required(VERSION 3.23)
project(lizzy_2d)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(lizzy_2d
        Lizzy2D.cpp
        Lizzy2D.h
        main.cpp)

target_link_libraries(lizzy_2d ${SDL2_LIBRARIES})

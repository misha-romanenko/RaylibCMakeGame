cmake_minimum_required(VERSION 3.15)

project(MyRaylibGame CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(raylib)

add_executable(MyRaylibGame
    src/main.cpp
)

target_link_libraries(MyRaylibGame PRIVATE raylib)

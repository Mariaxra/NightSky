cmake_minimum_required(VERSION 3.10)
project(Night)
find_package(raylib REQUIRED)

add_executable(app main.cpp star.cpp sky.cpp)
include_directories(include)
target_link_libraries(app raylib)

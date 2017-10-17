cmake_minimum_required(VERSION 3.8)
project(Basics_Project)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES test.h rectangle.cpp pointers.cpp)
add_executable(Basics_Project ${SOURCE_FILES})
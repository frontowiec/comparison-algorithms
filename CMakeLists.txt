cmake_minimum_required(VERSION 3.6)
project(algorytmy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp heap.h heap.cpp bubble.h bubble.cpp)
add_executable(algorytmy ${SOURCE_FILES})
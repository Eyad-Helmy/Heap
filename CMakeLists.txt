cmake_minimum_required(VERSION 3.28)
project(Heap)

set(CMAKE_CXX_STANDARD 17)

add_executable(Heap main.cpp
        maxheap.h
        maxheap.cpp)

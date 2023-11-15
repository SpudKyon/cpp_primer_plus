# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.10)
project(ch13)

set(CMAKE_CXX_STANDARD 14)

add_executable(task1 task1.cpp
        cd.cpp
        cd.h
        classic.cpp
        classic.h
)
add_executable(task2 task2.cpp
        classic1.cpp
        classic1.h
        cd1.cpp
        cd1.h)
add_executable(task3 task3.cpp
        dma.cpp
        dma.h)
add_executable(task4 task4.cpp
        port.cpp
        port.h)

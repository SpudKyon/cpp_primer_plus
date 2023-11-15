# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.10)
project(ch12)

set(CMAKE_CXX_STANDARD 14)

add_executable(task1 task1.cpp
        cow.cpp
        cow.h)
add_executable(task2 task2.cpp
        string2.cpp
        string2.h)
add_executable(task3 task3.cpp
        stock20.cpp
        stock20.h)
add_executable(task4 task4.cpp
        stock.cpp
        stock.h)
add_executable(task5 task5.cpp
        queue.cpp
        queue.h)
add_executable(task6 task6.cpp)

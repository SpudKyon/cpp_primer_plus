# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.10)
project(ch9)

set(CMAKE_CXX_STANDARD 14)

add_executable(task1
        task1.cpp
        golf.cpp)
add_executable(task2 task2.cpp)
add_executable(task3 task3.cpp)
add_executable(task4
        task4.cpp
        sales.cpp
        sales.h)
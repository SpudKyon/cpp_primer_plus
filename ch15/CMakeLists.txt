# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.10)
project(ch15)

set(CMAKE_CXX_STANDARD 14)

add_executable(task1 tv.cpp tv.h
        task1.cpp
        bad_hmean1.h)
add_executable(task2 bad_hmean.h
        task2.cpp)

add_executable(task3 task3.cpp
        bad_hmean1.h)
add_executable(task4 task4.cpp
        sales.cpp
        sales.h)

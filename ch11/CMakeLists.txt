# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.10)
project(ch11)

set(CMAKE_CXX_STANDARD 14)

add_executable(task1 task1.cpp
        Vect.cpp
        Vect.h)
add_executable(task2 task2.cpp
        Vect1.cpp
        Vect1.h)
add_executable(task3 task3.cpp
        Vect1.cpp
        Vect1.h)
add_executable(task4 task4.cpp
        mytime.cpp
        mytime.h)
add_executable(task5 task5.cpp
        stonewt.cpp
        stonewt.h)
add_executable(task6 task6.cpp
        stonewt1.cpp
        stonewt1.h)
add_executable(task7 task7.cpp
        complex0.cpp
        complex0.h)

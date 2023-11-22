# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.10)
project(ch14)

set(CMAKE_CXX_STANDARD 14)

add_executable(task1 task1.cpp
        wine.cpp
        wine.h
        pair.h)

add_executable(task2 task2.cpp
        wine1.cpp
        wine1.h
        pair.h)
add_executable(task3 worker.cpp worker.h
        task3.cpp
        queuetq.cpp
        queuetq.h)
add_executable(task4 person.cpp person.h
        task4.cpp)
add_executable(task5 emp.cpp emp.h
        task5.cpp)

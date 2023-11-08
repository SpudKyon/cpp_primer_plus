# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.10)
project(ch10)

set(CMAKE_CXX_STANDARD 14)

add_executable(task1 task1.cpp
        Account.cpp
        Account.h
)
add_executable(task2 task2.cpp
        Person.cpp)
add_executable(task3 task3.cpp
        Golf.cpp
        Golf.h)
add_executable(task4 task4.cpp
        Sales.cpp
        Sales.h)
add_executable(task5 task5.cpp
        Stack.cpp
        Stack.h)
add_executable(task6 task6.cpp
        Move.cpp
        Move.h)
add_executable(task7 task7.cpp
        Plorg.cpp
        Plorg.h)
add_executable(task8 task8.cpp
        List.cpp)
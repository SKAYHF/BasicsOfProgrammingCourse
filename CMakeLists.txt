cmake_minimum_required(VERSION 3.21)
project(untitled1 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled1 main.c libs/data_structures/vector/vecrot.c libs/data_structures/vector/vector.h)

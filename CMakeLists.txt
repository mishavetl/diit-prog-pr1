cmake_minimum_required(VERSION 3.14)
project(lr1)

set(CMAKE_CXX_STANDARD 11)

add_executable(lr1 main.cpp auto_tests.h auto_tests.cpp tasks.cpp tasks.h)
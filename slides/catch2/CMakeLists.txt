cmake_minimum_required(VERSION 3.11 FATAL_ERROR)
project(catch LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS true)
set(CMAKE_VERBOSE_MAKEFILE true)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(fixture fixture.cpp)
add_executable(section section.cpp)
add_executable(test_counter test_counter.cpp)
add_executable(test test.cpp)

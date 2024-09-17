# Specify minimum required version of CMake.
cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

# Specify project and identify languages used.
project(factorial LANGUAGES CXX)

# Enable verbose makefiles.
set(CMAKE_VERBOSE_MAKEFILE true)

# Add program target called factorial.
add_executable(factorial factorial.cpp)

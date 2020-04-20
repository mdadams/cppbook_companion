# Specify minimum required version of CMake.
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify project and identify languages used.
project(assert LANGUAGES CXX)

# Enable verbose makefiles.
set(CMAKE_VERBOSE_MAKEFILE true)

# Add program target called assert.
add_executable(assert assert.cpp)

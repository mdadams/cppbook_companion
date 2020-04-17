# Specify minimum required version of CMake.
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify project and identify languages used.
project(app LANGUAGES CXX)

# Enable verbose makefiles.
set(CMAKE_VERBOSE_MAKEFILE true)

# Add program target called app.
add_executable(app app.cpp)

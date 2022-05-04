# Specify minimum required version of CMake.
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify project and identify languages used.
project(hello LANGUAGES CXX)

set(CMAKE_VERBOSE_MAKEFILE TRUE)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Add program target called hello.
add_executable(app main.cpp util.cpp)

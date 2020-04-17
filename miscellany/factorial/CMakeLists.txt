# Specify minimum required version of CMake.
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify project and identify languages used.
project(factorial LANGUAGES CXX)

# Add program target called factorial.
add_executable(factorial factorial.cpp)

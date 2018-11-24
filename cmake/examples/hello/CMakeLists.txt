# Specify minimum required version of CMake.
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify project and identify languages used.
project(hello LANGUAGES CXX)

# Add program target called hello.
add_executable(hello hello.cpp)

# Specify minimum required version of CMake.
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify project and identify languages used.
project(hello LANGUAGES CXX)

# Generate a verbose makefile.
set(CMAKE_VERBOSE_MAKEFILE TRUE)

# Generate a compilation database file.
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Add program target called hello.
add_executable(app app/main.cpp util/util.cpp)
target_include_directories(app PRIVATE util)

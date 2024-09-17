cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(simple LANGUAGES CXX)

# Enable verbose makefiles.
set(CMAKE_VERBOSE_MAKEFILE ON)

# Generate compilation database file.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(app app.cpp)

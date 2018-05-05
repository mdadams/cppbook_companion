cmake_minimum_required(VERSION 3.11 FATAL_ERROR)
project(simple LANGUAGES CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(app app.cpp)

# Specify minimum required version of CMake.
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

# Specify project and identify languages used.
project(factorial LANGUAGES CXX)

# Enable Undefined Behavior Sanitizer (UBSan) for GCC/Clang.
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined")
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=undefined")

# Add program target called factorial.
add_executable(factorial factorial.cpp)

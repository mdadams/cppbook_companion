cmake_minimum_required(VERSION 3.28 FATAL_ERROR)
project(greet_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(lib)
target_sources(lib
	PUBLIC FILE_SET CXX_MODULES FILES
	greetings.cpp
)
add_executable(greet greet.cpp)
target_link_libraries(greet lib)

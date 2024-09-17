cmake_minimum_required(VERSION 3.28 FATAL_ERROR)
project(linkage_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(lib)
target_sources(lib
	PUBLIC FILE_SET CXX_MODULES FILES
	sol-m.cpp
	PRIVATE
	sol.cpp
)
add_executable(app main.cpp)
target_link_libraries(app lib)

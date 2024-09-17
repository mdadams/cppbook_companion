cmake_minimum_required(VERSION 3.28 FATAL_ERROR)
project(math_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(lib)
target_sources(lib
	PUBLIC FILE_SET CXX_MODULES FILES
	math-m.cpp
	PRIVATE
	math.cpp
)
add_executable(app app.cpp)
target_link_libraries(app lib)

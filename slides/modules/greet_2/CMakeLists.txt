cmake_minimum_required(VERSION 3.28)
project(greet_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(lib)
target_sources(lib
	PUBLIC FILE_SET CXX_MODULES FILES
	greetings-m.cpp
	PRIVATE
	greetings.cpp
)
add_executable(greet greet.cpp)
target_link_libraries(greet lib)

cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(libfoo LANGUAGES CXX)
set(CMAKE_VERBOSE_MAKEFILE true)
set(CMAKE_EXPORT_COMPILE_COMMANDS true)

# Note: This example is only for explanatory purposes.
# It is not intended as a normal use of CMake.

option(BUILD_WITH_LIBRARY "Build with a library." false)

if (BUILD_WITH_LIBRARY)
	# Build as a library
	add_library(foo lib/gadget.cpp lib/widget.cpp)
	target_include_directories(foo PUBLIC include)
	add_executable(demo app/demo.cpp)
	target_link_libraries(demo foo)
else()
	# Build without library
	add_executable(demo app/demo.cpp lib/gadget.cpp lib/widget.cpp)
	target_include_directories(demo PUBLIC include)
endif()

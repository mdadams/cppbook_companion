cmake_minimum_required(VERSION 3.11)
project(libfoo LANGUAGES CXX)
set(CMAKE_VERBOSE_MAKEFILE true)

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

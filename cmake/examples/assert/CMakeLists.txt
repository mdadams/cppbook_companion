# Specify minimum required version of CMake.
cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

# Specify project and identify languages used.
project(assert LANGUAGES CXX)

# Enable verbose makefiles.
set(CMAKE_VERBOSE_MAKEFILE true)

# Print the value of several key variables.
if((DEFINED CMAKE_BUILD_TYPE) AND (NOT CMAKE_BUILD_TYPE STREQUAL ""))
	message("CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
else()
	message("CMAKE_BUILD_TYPE is unset/empty")
endif()
message("CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
message("CMAKE_CXX_FLAGS_DEBUG: ${CMAKE_CXX_FLAGS_DEBUG}")
message("CMAKE_CXX_FLAGS_RELEASE: ${CMAKE_CXX_FLAGS_RELEASE}")
message("CMAKE_CXX_FLAGS_RELWITHDEBINFO: ${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
message("CMAKE_CXX_FLAGS_MINSIZEREL: ${CMAKE_CXX_FLAGS_MINSIZEREL}")

# Add program target called assert.
add_executable(assert assert.cpp)

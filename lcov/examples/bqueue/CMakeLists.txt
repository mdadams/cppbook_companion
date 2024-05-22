cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(coverage_example LANGUAGES CXX)

option(ENABLE_COVERAGE "Enable coverage" FALSE)
set(CMAKE_VERBOSE_MAKEFILE TRUE)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

find_package(Catch2 3 REQUIRED)

if (ENABLE_COVERAGE)
	set(CMAKE_BUILD_TYPE "Debug" CACHE STRING
	  "Set the build type." FORCE)
	include(CodeCoverage.cmake)
	append_coverage_compiler_flags()
endif()

add_executable(test_bqueue test_bqueue.cpp)
target_link_libraries(test_bqueue PRIVATE Catch2::Catch2WithMain)

if (ENABLE_COVERAGE)
	setup_target_for_coverage_lcov(
	  NAME coverage
	  EXECUTABLE ${CMAKE_CURRENT_BINARY_DIR}/test_bqueue
	  LCOV_ARGS --rc lcov_branch_coverage=1
	  GENHTML_ARGS --legend --branch-coverage
	  DEPENDENCIES test_bqueue)
endif()

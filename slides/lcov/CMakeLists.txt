cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(coverage_example LANGUAGES CXX C)
option(ENABLE_COVERAGE "Enable coverage" false)
set(CMAKE_VERBOSE_MAKEFILE true)
set(CMAKE_EXPORT_COMPILE_COMMANDS true)

if (ENABLE_COVERAGE)
	set(CMAKE_BUILD_TYPE "Debug" CACHE STRING
	  "Set the build type." FORCE)
	include(CodeCoverage.cmake)
	append_coverage_compiler_flags()
endif()

add_executable(app app.cpp signum.cpp)

if (ENABLE_COVERAGE)
	setup_target_for_coverage_lcov(
	  NAME coverage
	  EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/run_tests
	  EXECUTABLE_ARGS ${CMAKE_CURRENT_BINARY_DIR}
	  LCOV_ARGS --rc lcov_branch_coverage=1
	  GENHTML_ARGS --legend --branch-coverage
	  DEPENDENCIES app)
endif()

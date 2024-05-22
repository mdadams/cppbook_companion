cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(clang_tidy LANGUAGES CXX)

find_program(CLANG_TIDY_PROGRAM NAMES "clang-tidy"
  DOC "Path to clang-tidy executable")
if (CLANG_TIDY_PROGRAM)
	set(CLANG_TIDY_OPTIONS "-warnings-as-errors=*")
	set(RUN_CLANG_TIDY "${CLANG_TIDY_PROGRAM}" "${CLANG_TIDY_OPTIONS}")
endif()

add_library(lib lib.cpp)
add_executable(app app.cpp lib)
set(targets lib app)

if (CLANG_TIDY_PROGRAM)
	set_target_properties(${targets} PROPERTIES CXX_CLANG_TIDY
	  "${RUN_CLANG_TIDY}")
endif()

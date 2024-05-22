cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(slides_catch LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS true)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include(CTest)
find_package(Catch2 3 REQUIRED)
include(Catch)

add_executable(fixture fixture.cpp)
target_link_libraries(fixture PRIVATE Catch2::Catch2WithMain)
list(APPEND targets fixture)

add_executable(section section.cpp)
target_link_libraries(section PRIVATE Catch2::Catch2WithMain)
list(APPEND targets section)

add_executable(test_counter test_counter.cpp)
target_link_libraries(test_counter PRIVATE Catch2::Catch2WithMain)
list(APPEND targets test_counter)

add_executable(test_math test_math.cpp)
target_link_libraries(test_math PRIVATE Catch2::Catch2WithMain)
list(APPEND targets test_math)

add_executable(test_stack test_stack.cpp)
target_link_libraries(test_stack PRIVATE Catch2::Catch2WithMain)
list(APPEND targets test_stack)

add_executable(test_bubble_sort test_bubble_sort.cpp)
target_link_libraries(test_bubble_sort PRIVATE Catch2::Catch2WithMain)
list(APPEND targets test_bubble_sort)

add_executable(benchmark_fibonacci benchmark_fibonacci.cpp)
target_link_libraries(benchmark_fibonacci PRIVATE Catch2::Catch2WithMain)
list(APPEND targets benchmark_fibonacci)

foreach(target ${targets})
	catch_discover_tests(${target})
endforeach()

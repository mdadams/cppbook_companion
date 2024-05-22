cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(slides_tsan LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

find_package(Threads REQUIRED)

add_executable(data_race data_race.cpp)
target_link_libraries(data_race Threads::Threads)

add_executable(data_race_1 data_race_1.cpp)
target_link_libraries(data_race_1 Threads::Threads)

add_executable(data_race_2 data_race_2.cpp)
target_link_libraries(data_race_2 Threads::Threads)

add_executable(deadlock deadlock.cpp)
target_link_libraries(deadlock Threads::Threads)

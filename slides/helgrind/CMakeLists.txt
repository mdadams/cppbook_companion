cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(slides_helgrind LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

find_package(Threads REQUIRED)

add_executable(data_race_1_0 data_race_1_0.cpp)
target_link_libraries(data_race_1_0 Threads::Threads)

add_executable(data_race_1_1 data_race_1_1.cpp)
target_link_libraries(data_race_1_1 Threads::Threads)

cmake_minimum_required(VERSION 3.11)
project(demo LANGUAGES CXX)
set(CMAKE_VERBOSE_MAKEFILE true)

find_package(Boost REQUIRED COMPONENTS chrono date_time)

################################################################################
# month_later target
################################################################################

add_executable(month_later month_later.cpp)

# Use include-directories and library variables.
target_include_directories(month_later PUBLIC ${Boost_INCLUDE_DIRS})
target_link_libraries(month_later ${Boost_DATE_TIME_LIBRARY})

# Use imported targets
#target_link_libraries(month_later Boost::date_time)

################################################################################
# time target
################################################################################

add_executable(time time.cpp)

# Use include-directories and library variables.
target_include_directories(time PUBLIC ${Boost_INCLUDE_DIRS})
target_link_libraries(time ${Boost_CHRONO_LIBRARY} ${Boost_SYSTEM_LIBRARY})

# Use imported targets
#target_link_libraries(time Boost::chrono)

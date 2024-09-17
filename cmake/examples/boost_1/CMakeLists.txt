cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(demo LANGUAGES CXX)
set(CMAKE_VERBOSE_MAKEFILE true)

# Note: Since the specified Boost components are necessary to build the code,
# treat the case of missing components as a fatal error by using the "REQUIRED"
# qualifier.
find_package(Boost REQUIRED COMPONENTS chrono date_time)

################################################################################
# month_later target
################################################################################

add_executable(month_later month_later.cpp)

# Approach 1: Use include-directories and library variables.
# Note: We need to specify include directories.
target_include_directories(month_later PUBLIC ${Boost_INCLUDE_DIRS})
target_link_libraries(month_later ${Boost_DATE_TIME_LIBRARY})

# Approach 2: Use imported targets
# Note: We do not need to specify include directories.
#target_link_libraries(month_later Boost::date_time)

################################################################################
# time target
################################################################################

add_executable(time time.cpp)

# Approach 1: Use include-directories and library variables.
# Note: We need to specify include directories.
# Note: We need to specify any depended-upon library (i.e., system).
target_include_directories(time PUBLIC ${Boost_INCLUDE_DIRS})
target_link_libraries(time ${Boost_CHRONO_LIBRARY} ${Boost_SYSTEM_LIBRARY})

# Approach 2: Use imported targets
# Note: We do not need to specify include directories.
# Note: We do not need to specify depended-upon libraries.
#target_link_libraries(time Boost::chrono)


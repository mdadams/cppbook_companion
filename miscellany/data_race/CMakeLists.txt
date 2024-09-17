cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(threads_example LANGUAGES CXX)

option(ENABLE_TSAN "Enable Thread Sanitizer" false)

# Require compliance with C++17 standard.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(CMAKE_VERBOSE_MAKEFILE true)

if(ENABLE_TSAN)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread")
endif()

# Find the threads library, indicating a preference for the
# pthread library.
set(THREADS_PREFER_PTHREAD_FLAG true)
find_package(Threads REQUIRED)

# Define a program target called app.
add_executable(app app.cpp)

# Set the libraries for the app target.
target_link_libraries(app Threads::Threads)

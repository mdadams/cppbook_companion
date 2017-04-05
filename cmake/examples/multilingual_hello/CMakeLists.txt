cmake_minimum_required(VERSION 3.0)

project(hello LANGUAGES CXX C Fortran Java)

add_executable(hello_c++ hello.cpp)
add_executable(hello_c hello.c)
add_executable(hello_fortran hello.f)
add_library(hello_java hello.java)

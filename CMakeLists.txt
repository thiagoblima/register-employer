cmake_minimum_required(VERSION 3.12)
project(Employ)

set(CMAKE_CXX_STANDARD 14)

add_executable(Employ src/main.cpp "include/employee.h" "include/programmer.h" "include/languages.h")

cmake_minimum_required(VERSION 3.13)
project(my_printf)

set(CMAKE_CXX_STANDARD 14)

add_executable(my_printf main.cpp mylib.cpp mylib.hpp)
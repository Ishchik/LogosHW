cmake_minimum_required(VERSION 3.13)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 14)

add_executable(TicTacToe main.cpp Game.cpp Game.hpp Human.cpp Human.hpp Board.cpp Board.hpp)
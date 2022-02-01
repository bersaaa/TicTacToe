cmake_minimum_required(VERSION 3.21)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TicTacToe
        TicTacToe.cpp
        TicTacToe.h
        TicTacToeTest.cpp)

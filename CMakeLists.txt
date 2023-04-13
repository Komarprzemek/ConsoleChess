cmake_minimum_required(VERSION 3.23)
project(ConsoleChess)

set(CMAKE_CXX_STANDARD 23)

add_executable(ConsoleChess main.cpp chess.cpp chess.h game.cpp game.h interface.h interface.cpp includes.h)

cmake_minimum_required(VERSION 3.16)
project(/src/week2)

set(CMAKE_CXX_STANDARD 14)

add_executable(week2 main.cpp Human.h Human.cpp Computer.h Computer.cpp Referee.cpp Referee.h)

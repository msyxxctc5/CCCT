cmake_minimum_required(VERSION 3.16)
project(/src/week3)

set(CMAKE_CXX_STANDARD 14)

add_executable(week3 main.cpp Human.h Human.cpp Computer.h Computer.cpp Referee.cpp Referee.h Player.cpp Player.h RandomComputer.cpp RandomComputer.h Avalanche.cpp Avalanche.h Bureaucrat.cpp Bureaucrat.h Toolbox.cpp Toolbox.h Crescendo.cpp Crescendo.h PaperDoll.cpp PaperDoll.h FistfullODollars.cpp FistfullODollars.h)

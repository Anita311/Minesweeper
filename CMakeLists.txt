cmake_minimum_required(VERSION 3.5.1)
project (Minesweeper)
add_executable(Minesweeper myHeader.cpp main.cpp generateMinesweeper.cpp printGrid.cpp minesweeperPlayer.cpp countAdjacentMines.cpp)

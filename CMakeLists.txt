set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
cmake_minimum_required(VERSION 3.5.1)
project (Minesweeper)

add_subdirectory(lib/googletest-master)
include_directories("lib/googletest-master/googletest/include")


add_executable(Minesweeper myHeader.cpp main.cpp generateMinesweeper.cpp printGrid.cpp minesweeperPlayer.cpp countAdjacentMines.cpp inputValid.cpp test.cpp)
target_link_libraries(Minesweeper gtest gtest_main)

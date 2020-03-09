cmake_minimum_required(VERSION 3.15)
project(P4_GeneticSudoku)

set(CMAKE_CXX_STANDARD 14)

add_executable(P4_GeneticSudoku GeneticAlgorithm.cpp Sudoku.cpp SudokuFactory.cpp SudokuFitness.cpp SudokuOffspring.cpp SudokuOffspring.cpp)
//
// Created by Jonathan Young on 3/8/2020.
//

#include "Sudoku.h"

Sudoku::Sudoku() {
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            Cell* sudokuCell = new Cell();
            sudokuGrid[i][j] = sudokuCell;
        }
    }
}

Sudoku::~Sudoku() {
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            delete sudokuGrid[i][j];
            sudokuGrid[i][j] = nullptr;
        }
    }
}

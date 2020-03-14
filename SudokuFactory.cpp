//
// Created by Jonathan Young on 3/8/2020.
//

#include "SudokuFactory.h"

SudokuFactory::SudokuFactory() {

}

SudokuFactory::~SudokuFactory() {

}

Sudoku *SudokuFactory::createPuzzle(string templateString) {
    auto *templateSudoku = new Sudoku();
    //templateSudoku->operator>>(templateString);
    return templateSudoku;
}

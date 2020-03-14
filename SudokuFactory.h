//
// Created by Jonathan Young on 3/8/2020.
// Sub-Class of PuzzleFactory to instantiate puzzles
//

#ifndef P4_GENETICSUDOKU_SUDOKUFACTORY_H
#define P4_GENETICSUDOKU_SUDOKUFACTORY_H

#include "PuzzleFactory.h"
#include "Sudoku.h"

// SudokuFactory is a sub-class of PuzzleFactory
class SudokuFactory : public PuzzleFactory {

};

//The SudokuFactory uses a SudokuOffspring object and implements "createPuzzle" to produce new Sudoku objects.

#endif //P4_GENETICSUDOKU_SUDOKUFACTORY_H

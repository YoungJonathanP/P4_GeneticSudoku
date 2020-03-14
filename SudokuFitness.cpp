//
// Created by Jonathan Young on 3/8/2020.
//

#include "SudokuFitness.h"

SudokuFitness::SudokuFitness(Sudoku *inPuz) {
    puzzle = inPuz;
}

SudokuFitness::~SudokuFitness() {

}

int SudokuFitness::howFit() {

    return conflict;
}

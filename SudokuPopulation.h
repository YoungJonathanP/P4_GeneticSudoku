//
// Created by Jonathan Young on 3/8/2020.
// Child class of Population. Performs the tasks of all population modification actions.
//

#ifndef P4_GENETICSUDOKU_SUDOKUPOPULATION_H
#define P4_GENETICSUDOKU_SUDOKUPOPULATION_H

#include <vector>
#include "Population.h"
#include "SudokuFactory.h"


// SudokuPopulation inherits from Population class
class SudokuPopulation : public Population {
public:
    // parameterized constructor to create initial puzzle
    SudokuPopulation(int, int, string);

    // deconstructor
    ~SudokuPopulation();

    virtual Sudoku *bestIndividual();

protected:
    SudokuFactory *startingPuzzleFac;
    vector<Sudoku *> puzzles;
    //int popCounter = 0;
};
// can use a PuzzleFactory and a Reproduction strategy to produce a new generation of Puzzles

#endif //P4_GENETICSUDOKU_SUDOKUPOPULATION_H

//
// Created by Jonathan Young on 3/8/2020.
// Strategy pattern Reproduction interface. Works with SudokuOffspring for the purposes mutations in future generations
//

#ifndef P4_GENETICSUDOKU_REPRODUCTION_H
#define P4_GENETICSUDOKU_REPRODUCTION_H

#include "Puzzle.h"

class Reproduction {
public:
    // default constructor
    Reproduction();

    // deconstructor
    ~Reproduction();

    // interface offspring creation method for Puzzles
    virtual Puzzle *makeOffspring() = 0;

};


#endif //P4_GENETICSUDOKU_REPRODUCTION_H

//
// Created by Jonathan Young on 3/8/2020.
// Fitness interface for evaluation of sudoku puzzles and their probability of being a solution.
//

#ifndef P4_GENETICSUDOKU_FITNESS_H
#define P4_GENETICSUDOKU_FITNESS_H

#include "Puzzle.h"

class Fitness {
public:
    // Fitness default constructor
    Fitness();

    // Fitness deconstructor
    ~Fitness();

    // virtual howFit function returns an int value. Will be used in subclass
    virtual int howFit() = 0;
};


#endif //P4_GENETICSUDOKU_FITNESS_H

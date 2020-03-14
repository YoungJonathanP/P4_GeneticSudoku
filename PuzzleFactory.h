//
// Created by Jonathan Young on 3/8/2020.
// Interface factory class for producing new puzzles. A PuzzleFactory is provided at construction time with a Reproduction object that it uses to create new instances of Puzzle
//

#ifndef P4_GENETICSUDOKU_PUZZLEFACTORY_H
#define P4_GENETICSUDOKU_PUZZLEFACTORY_H


#include "Puzzle.h"

class PuzzleFactory {
public:
    // default constructor
    PuzzleFactory();
    // deconstructor
    ~PuzzleFactory();

    // virtual method to create a new puzzle instance.
    virtual Puzzle* createPuzzle(string) = 0;
};


#endif //P4_GENETICSUDOKU_PUZZLEFACTORY_H

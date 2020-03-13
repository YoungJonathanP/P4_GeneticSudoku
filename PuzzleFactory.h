//
// Created by Jonathan Young on 3/8/2020.
// Interface class for creating new puzzle objects
//

#ifndef P4_GENETICSUDOKU_PUZZLEFACTORY_H
#define P4_GENETICSUDOKU_PUZZLEFACTORY_H


#include "Puzzle.h"

class PuzzleFactory {
public:
    PuzzleFactory();
    ~PuzzleFactory();
    Puzzle* createPuzzle(string) = 0;
};


#endif //P4_GENETICSUDOKU_PUZZLEFACTORY_H

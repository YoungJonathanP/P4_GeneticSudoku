//
// Created by Jonathan Young on 3/8/2020.
//

#ifndef P4_GENETICSUDOKU_SUDOKU_H
#define P4_GENETICSUDOKU_SUDOKU_H

#include "Puzzle.h"
using namespace std;

class Sudoku {
public:
    Sudoku();
    ~Sudoku();

private:
    // private struct for cell objects
    struct Cell {
        // initial numeric digit from 0 through 9
        int value;
        // this is true if the value passed is not 0
        bool isFixed = false;
        Cell() {
            // default cell value
            value = 0;
            // this is true if the value passed is 0 from initial puzzle
            isFixed = false;
        }
        // constructor with value passed to it
        explicit Cell(int val){
            value = val;
            // this is true if the value passed is not 0
            isFixed = val != 0;
        }
    };
    // a 9 by 9 collection of Cells for a puzzle
    Cell* sudokoGrid[9][9];
};


#endif //P4_GENETICSUDOKU_SUDOKU_H

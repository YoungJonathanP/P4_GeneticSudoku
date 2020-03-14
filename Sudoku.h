//
// Created by Jonathan Young on 3/8/2020.
// Sudoku Interface Class. This class handles object creation for making Sudoku puzzles. Puzzles are filled with digit values from 0 to 9, with 0 values establishing non-fixed values upon intial reading.
//

#ifndef P4_GENETICSUDOKU_SUDOKU_H
#define P4_GENETICSUDOKU_SUDOKU_H

#include "Puzzle.h"

using namespace std;

class Sudoku : public Puzzle {
public:
    // default constructor for sudoku objects
    Sudoku();

    // copy constructor for sudoku objects
    explicit Sudoku(const Sudoku *);

    // deconstructor for sudoku objects
    ~Sudoku();

    // boolean method for returning if a Cell is able to be mutated
    bool isFixed(int, int);

    // helper method to assist with changing or setting sudoku cell values
    void setCell(int, int, int);

private:
    // private struct for cell objects
    struct Cell {
        // initial numeric digit from 0 through 9
        int value;
        // this is true if the value passed is not 0
        bool isFixed = false;

        // default constructor for Cell
        Cell() {
            // default cell value
            value = 0;
            // this is true if the value passed is 0 from initial puzzle
            isFixed = false;
        }

        // copy constructor for Cell object
        explicit Cell(const Cell *parent) {
            value = parent->value;
            isFixed = parent->isFixed;
        }

        // constructor with value passed to it
        explicit Cell(int val) {
            value = val;
            // this is true if the value passed is not 0
            isFixed = val != 0;
        }
    };

    // a 9 by 9 collection of Cells for a puzzle
    Cell *sudokuGrid[9][9];
};


#endif //P4_GENETICSUDOKU_SUDOKU_H

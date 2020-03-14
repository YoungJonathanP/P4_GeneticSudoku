//
// Created by Jonathan Young on 3/8/2020.
// Class that creates mutations in future generations of puzzles
//

#ifndef P4_GENETICSUDOKU_SUDOKUOFFSPRING_H
#define P4_GENETICSUDOKU_SUDOKUOFFSPRING_H

#include "Reproduction.h"
#include "Sudoku.h"
#include <random>

// inherits from Reproduction interface
class SudokuOffspring : public Reproduction {
public:
    // constructor for SudokuOffspring, takes a Sudoku pointer as an argument
    explicit SudokuOffspring(); //Sudoku*
    // deconstructor for SudokuOffspring
    ~SudokuOffspring();

    // This method creates new sudoku puzzles, potentially with mutations. Takes a pointer to a Sudoku object as an argument and returns a pointer to that created puzzle
    Sudoku *makeOffspring(Sudoku *);

    int randomNum();

private:
    //Sudoku *parent;

};


#endif //P4_GENETICSUDOKU_SUDOKUOFFSPRING_H

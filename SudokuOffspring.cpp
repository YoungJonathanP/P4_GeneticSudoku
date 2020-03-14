//
// Created by Jonathan Young on 3/8/2020.
// Class that creates mutations in future generations of puzzles
//

#include <chrono>
#include "SudokuOffspring.h"

// default constructor for SudokuOffspring
SudokuOffspring::SudokuOffspring(Sudoku *parentPuz) { //
    parent = parentPuz;
}

SudokuOffspring::~SudokuOffspring() = default;

// following code taken from "Example Random Number Generation in C++" posted by Michael Stiber
int SudokuOffspring::randomNum() {
    int theNumber;
    // the following is the "engine" that produces pseudorandom numbers
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    // the following is an algorithm that produces a particular distribution
    // of random numbers from the output of an engine.
    uniform_int_distribution<int> uniform(1, 9);
    // Get a value from the uniform distribution
    theNumber = uniform(generator);
    return theNumber;
}

// This method creates new sudoku puzzles, potentially with mutations. Takes a pointer to a Sudoku object as an argument and returns a pointer to that created puzzle
Sudoku *SudokuOffspring::makeOffspring() {
    auto *offspring = new Sudoku(parent);
    int mutatePercent = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            // if false, this cell is eligible for mutation
            if (!offspring->isFixed(i, j)) {
                // create a random number from 1 - 100
                mutatePercent = rand() % 100 + 1;
                // if that random number is between 2 and 5 call randomNum to generate a new value
                if (mutatePercent < 6 && mutatePercent > 1) {
                    offspring->setCell(i, j, randomNum());
                }
            }
        }
    }
    return offspring;
}



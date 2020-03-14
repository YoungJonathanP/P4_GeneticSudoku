//
// Created by Jonathan Young on 3/8/2020.
//

#include "Sudoku.h"

// *** GOES IN CPP ***
// operator<<
// overloaded <<: prints "DIVIDE BY ZERO ERROR!!!" if Denominator is zero,
//    prints whole numbers without Denominator (as ints), otherwise uses '/'

    ostream &operator<<(ostream &Output, const Rational &R) {
        if (R.Denominator == 0)
            Output << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
        else if (R.Numerator == 0)                              // zero rational
            Output << 0;
        else if (R.Denominator == 1)                            // whole number
            Output << R.Numerator;
        else
            Output << R.Numerator << "/" << R.Denominator;

        return Output;
    }

// operator>>
// overloaded >>: takes 2 ints as Numerator and Denominator, does no
//    error checking, standard C casting between floats, char, etc occurs

istream &operator>>(istream &input, Puzzle &inPuz) { //Rational &R
    input >> inPuz >> R.Denominator;
    R.reduce();

    return input;
}

// default constructor for Sudoku class. This creates a new Sudoku puzzle with Cell pointers in each of the 81 squares
Sudoku::Sudoku() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            Cell *sudokuCell = new Cell();
            sudokuGrid[i][j] = sudokuCell;
        }
    }
}

// copy constructor for sudoku objects
Sudoku::Sudoku(const Sudoku *parent) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            Cell *sudokuCell = new Cell(parent->sudokuGrid[i][j]);
            sudokuGrid[i][j] = sudokuCell;
        }
    }
}

// deconstructor for Sudoku puzzles. Removes all values from puzzle and sets all pointers to nullptr
Sudoku::~Sudoku() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            delete sudokuGrid[i][j];
            sudokuGrid[i][j] = nullptr;
        }
    }

}

// boolean method to check if Cell has established fixed value. Returns true if cell is unable to be changed
bool Sudoku::isFixed(int row, int col) {
    return sudokuGrid[row][col]->isFixed;
}

// helper method to assist with changing or setting sudoku cell values
void Sudoku::setCell(int row, int col, int num) {
    sudokuGrid[row][col]->value = num;
}



//
// Created by Jonathan Young on 3/8/2020.
//

#include "Sudoku.h"

// operator<< overload output operator
ostream &operator<<(ostream &output, const Puzzle &endingPuz) {
//    if (endingPuz) {
//        output << "Could not find puzzle" << endl;
//        return output;
//    }
    //output << "The best puzzle has a fitness value of: " << endingPuz.getBestFit() << endl;
    output << "+-------+-------+-------+" << endl;
    for (int i = 0; i < 9; i++) {
        output << "| ";
        for (int j = 0; j < 9; j++) {
            if (j % 3 == 0) {
                output << "| ";
            }
            //output << endingPuz.getCell(i, j) << " ";
        }
        output << " |" << endl;
        if (i % 3 == 0) {
            output << "+-------+-------+-------+" << endl;
        }
    }
    output << "+-------+-------+-------+" << endl;
    return output;
}

// operator>> overload input
istream &operator>>(istream &input, Sudoku &toPuz) {
    int num = 0;
    char c;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            input >> c;
            if (c < '0' || c > '9') {
                toPuz.setCell(i, j, (int) (c - '0'));
                if (c == '0') {
                    toPuz.setFixed(i, j);
                }
            }
        }
    }
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

void Sudoku::setFixed(int row, int col) {
    sudokuGrid[row][col]->isFixed = true;
}

// helper method to assist with changing or setting sudoku cell values
void Sudoku::setCell(int row, int col, int num) {
    sudokuGrid[row][col]->value = num;
}



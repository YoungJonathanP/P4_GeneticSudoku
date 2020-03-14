//
// Created by Jonathan Young on 3/8/2020.
//

#ifndef P4_GENETICSUDOKU_SUDOKUFITNESS_H
#define P4_GENETICSUDOKU_SUDOKUFITNESS_H

#include "Fitness.h"
#include "Sudoku.h"

class SudokuFitness : public Fitness {
public:
    explicit SudokuFitness(Sudoku *);

    ~SudokuFitness();

    int howFit();

protected:
    Sudoku *puzzle;
private:
    int conflict = 0;
};


#endif //P4_GENETICSUDOKU_SUDOKUFITNESS_H

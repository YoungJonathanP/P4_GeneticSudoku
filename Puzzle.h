//
// Created by Jonathan Young on 3/8/2020.
// This interface class is for instantiation of Puzzle objects
//

#ifndef P4_GENETICSUDOKU_PUZZLE_H
#define P4_GENETICSUDOKU_PUZZLE_H

#include <iostream>

using namespace std;


class Puzzle {
public:
    Puzzle();

    ~Puzzle();

    // standard stream operators for input and output
    friend ostream &operator<<(ostream &out, const Puzzle &sudPuz); // put output object here

    // stream input
    friend istream &operator>>(istream &in, Puzzle &); // put input object here
};


#endif //P4_GENETICSUDOKU_PUZZLE_H

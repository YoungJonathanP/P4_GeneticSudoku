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
    friend ostream& operator<<(ostream& out, const  Puzzle& sudPuz); // put output object here

    // stream input
    friend istream& operator>>(istream& in, Puzzle& inPuz); // put input object here


    //  Subclasses must implement stream I/O helper methods
    //  (the file Puzzle.h will define the standard stream I/O operators
    //  (operator<<() and operator>>() to call these methods)

    // *** FROM .h FILE
    // overloaded <<: prints "DIVIDE BY ZERO ERROR!!!" if Denominator is zero,
//    prints whole numbers without Denominator (as ints), otherwise uses '/'
    //friend ostream &operator<<(ostream &Output, const Rational &R);

// overloaded >>: takes 2 ints as Numerator and Denominator, does no
//    error checking, standard C casting between floats, char, etc occurs
    //friend istream &operator>>(istream &input, Rational &R);

};


#endif //P4_GENETICSUDOKU_PUZZLE_H

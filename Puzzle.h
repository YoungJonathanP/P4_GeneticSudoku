//
// Created by Jonathan Young on 3/8/2020.
// This interface class is for instantiation of Puzzle objects
//

#ifndef P4_GENETICSUDOKU_PUZZLE_H
#define P4_GENETICSUDOKU_PUZZLE_H

using namespace std;


class Puzzle {

    // standard stream operators for input and output
    friend ostream& operator<<(ostream&, const ); // put output object here

    // stream input
    friend istream& operator>>(istream&, ); // put input object here


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


    // *** GOES IN CPP ***
    // operator<<
// overloaded <<: prints "DIVIDE BY ZERO ERROR!!!" if Denominator is zero,
//    prints whole numbers without Denominator (as ints), otherwise uses '/'

//    ostream &operator<<(ostream &Output, const Rational &R) {
//        if (R.Denominator == 0)
//            Output << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
//        else if (R.Numerator == 0)                              // zero rational
//            Output << 0;
//        else if (R.Denominator == 1)                            // whole number
//            Output << R.Numerator;
//        else
//            Output << R.Numerator << "/" << R.Denominator;
//
//        return Output;
//    }

// operator>>
// overloaded >>: takes 2 ints as Numerator and Denominator, does no
//    error checking, standard C casting between floats, char, etc occurs

//    istream &operator>>(istream &input, Rational &R) {
//        input >> R.Numerator >> R.Denominator;
//        R.reduce();
//
//        return input;
//    }


};


#endif //P4_GENETICSUDOKU_PUZZLE_H

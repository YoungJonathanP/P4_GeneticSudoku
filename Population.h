//
// Created by Jonathan Young on 3/8/2020.
// Aggregation of Puzzle class. Container class for a number of puzzle objects
//

#ifndef P4_GENETICSUDOKU_POPULATION_H
#define P4_GENETICSUDOKU_POPULATION_H


#include "Puzzle.h"

// One population has a collection of puzzles
class Population {
public:
    virtual void cull() = 0;

    virtual void newGeneration() = 0;

    virtual int bestFitness() = 0;

    virtual Puzzle *bestIndividual() = 0;

protected:
    int population;
    int generations;
};


#endif //P4_GENETICSUDOKU_POPULATION_H

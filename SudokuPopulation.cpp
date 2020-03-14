//
// Created by Jonathan Young on 3/8/2020.
//
//

#include "SudokuPopulation.h"
#include "SudokuOffspring.h"
#include "SudokuFitness.h"

// parameterized constructor to create initial puzzle
SudokuPopulation::SudokuPopulation(int sudokuPop, int SudokuGen, string puzzleTemplate) {
    population = sudokuPop;
    generations = SudokuGen;
    startingPuzzleFac = new SudokuFactory();
    Sudoku *startingPuzzle = startingPuzzleFac->createPuzzle(puzzleTemplate);
    SudokuOffspring populate(startingPuzzle);
    for (int i = 0; i < population; i++) {
        puzzles.push_back(populate.makeOffspring());
    }
}

SudokuPopulation::~SudokuPopulation() {
    delete startingPuzzleFac;
    startingPuzzleFac = nullptr;
    puzzles.clear();
}

// method to reduce population total by 90%
void Population::cull() {
    int popKeep = population * .1;
    vector<Sudoku *> survivingPop;
    //Sudoku* curr = bestIndividual();

}

// calls for creation of next generation
void Population::newGeneration() {

}

// returns the value closest to 0;
int Population::bestFitness() {

}

// Evaluates the best single puzzle and returns that puzzle
Sudoku *SudokuPopulation::bestIndividual() {
    int bestPuzzle = 243;
    Sudoku *curr;
//    for (auto *i: puzzles) {
//        SudokuFitness
//    }
}
#ifndef SUDOKU_H
#define SUDOKU_H
#include "validation.h"
#include <iostream>
#include <string>

//Main sudoku class
class Sudoku{
    private:
        void readFile(std::string file); 
    public:
        Sudoku(std::string fileName);
        char box[9][9]; //Whole sudoku is copied into this 2x2 array for ease in functioning.
        bool isValid;
};
#endif
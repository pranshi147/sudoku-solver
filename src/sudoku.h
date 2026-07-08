#ifndef SUDOKU_H
#define SUDOKU_H
#include "validation.h"
#include <iostream>
#include <string>

class Sudoku{
    private:
        void readFile(std::string file); // to implement by copying from validator
    public:
        Sudoku(std::string fileName);
        char box[9][9];
        bool isValid;
};
#endif
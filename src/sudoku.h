#ifndef SUDOKU_H
#define SUDOKU_H
#include "validation.h"
class Sudoku{
    public:
        char box[9][9];
        Validator isValid;
};
#endif
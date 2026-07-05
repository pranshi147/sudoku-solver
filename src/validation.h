#ifndef VALIDATION_H
#define VALIDATION_H
#include "sudoku.h"
class Validator{
    public:
        Sudoku sudoku;
        Validator();
        bool checkRows();
        bool checkColumns();
        bool boxCheck();
        bool overallCheck();
};

#endif
#ifndef VALIDATION_H
#define VALIDATION_H

class Sudoku; // forward declaration of the sudoku class

//Class made to check whether the sudoku is valid or not, step by step.
class Validator{
    Sudoku* s = nullptr;
    public:
        Validator(Sudoku* s);
        bool checkRows();
        bool checkColumns();
        bool boxCheck();
        bool overallCheck();
};

#endif
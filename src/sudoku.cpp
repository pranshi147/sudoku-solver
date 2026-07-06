#include "sudoku.h"
#include<cstring>

Sudoku::Sudoku(std::string fileName) {
    isValid = false;
    readFile(fileName);   
    Validator* v = new Validator(this);
    isValid = v->overallCheck();
}
/**
 *
 * Note there is a lot to be still implemented here and this 
 * just shows the basic structure that it should be in.
 *
 */
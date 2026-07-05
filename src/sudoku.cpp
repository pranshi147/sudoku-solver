#include "sudoku.h"


Sudoku::Sudoku(std::string fileName){
    isValid = false;
    this->box = this->readFile(fileName);  // actually memcpy here instead
    Validator* v = new Validator(this);
    isValid = v->overallCheck();
}

/**
 *
 * Note there is a lot to be still implemented here and this 
 * just shows the basic structure that it should be in.
 *
 */

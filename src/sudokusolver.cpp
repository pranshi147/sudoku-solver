#include "sudoku.h"
#include "sudokusolver.h"
#include "boxsolver.h"
#include "columnsolver.h"
#include "rowsolver.h"
#include "validation.h"
#include "xcounter.h"
#include "frequency.h"

void sudokuSolver(Sudoku *s){
    if(xCounter(s)!=0){
        BoxSolver *b;
        b->s= s;
        b->Box1(frequency(s))
    }
}
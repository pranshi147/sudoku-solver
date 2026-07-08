#include "sudoku.h"
#include "rowsolver.h"

bool rowSolver(Sudoku *s, int *row, char number){
    for(int i=0; i<9; i++){
        if(s->box[*row][i]==number) return false;
    }
    return true;
}
#include "sudoku.h"
#include "columnsolver.h"

bool columnSolver(Sudoku *s, int *column, char number){
    for(int i=0; i<9; i++){
        if(s->box[i][*column]==number) return false;
    }
    return true;
}
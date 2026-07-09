#include "sudoku.h"
#include "columnsolver.h"

//Checks if the number exists or not in the column (For overall solving)
bool columnSolver(Sudoku *s, int *column, char number){
    for(int i=0; i<9; i++){
        if(s->box[i][*column]==number) return false;
    }
    return true;
}
#include "sudoku.h"
#include "rowsolver.h"

//Checks if the number exists or not in the row (For overall solving)
bool rowSolver(Sudoku *s, int *row, char number){
    for(int i=0; i<9; i++){
        if(s->box[*row][i]==number) return false;
    }
    return true;
}
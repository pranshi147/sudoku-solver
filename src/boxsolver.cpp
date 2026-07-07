#include "sudoku.h"
#include "boxsolver.h"

void BoxSolver::Box1(char* a){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(this->s->box[i][j]== *a){
                return;
            }
        }
    }
}
#include "xcounter.h"
#include "sudoku.h"

/*Function made to check whether the sudoku is complete or not, by counting the number of X remaining.*/
int xCounter(Sudoku *s){
    int count =0;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(s->box[i][j]=='X') count++;
        }
    }
    return count;
}
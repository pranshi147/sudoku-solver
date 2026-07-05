#include <cstring>
#include "frequency.h"
#include "validation.h"
#include "sudoku.h"

using namespace std;

Sudoku sudoku;
int frequency(char arr[]){
    int count[9];
    int max=0;
    memset(count, '0', sizeof(arr));
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            count[sudoku.box[i][j]]++;
            if(count[sudoku.box[i][j]]>max) max= sudoku.box[i][j];
        }
    }
    return max;
}
#include "sudoku.h"
#include "display.h"

void display(Sudoku *s){
    std::cout<<"-------------------"<<std::endl;
    for(int i=0; i<9; i++){
        std::cout<<"|";
        for(int j=0; j<9; j++){
            std::cout<<s->box[i][j]<<"|";
        }
        std::cout<<std::endl<<"-------------------"<<std::endl;
    }
}


#include<iostream>
#include "sudoku.h"
#include "sudokusolver.h"
#include "boxsolver.h"
#include "columnsolver.h"
#include "rowsolver.h"
#include "validation.h"
#include "xcounter.h"


void sudokuSolver(Sudoku *s){
    loop:
    for(int i=0; i<9; i++){
        if(xCounter(s)!=0){
        BoxSolver *b;
        b->s= s;
        b->Box1(i);
        b->Box2(i);
        b->Box3(i);
        b->Box4(i);
        b->Box5(i);
        b->Box6(i);
        b->Box7(i);
        b->Box8(i);
        b->Box9(i);
        }
        else{
            std::cout<<"Sudoku is completed"<<std::endl;
            return;
        }
        goto loop;
}
}
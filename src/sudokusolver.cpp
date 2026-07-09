#include<iostream>
#include "sudoku.h"
#include "sudokusolver.h"
#include "boxsolver.h"
#include "columnsolver.h"
#include "rowsolver.h"
#include "validation.h"
#include "xcounter.h"

//Main sudoku solving function which implements all the required functions for all 81 boxes.
void sudokuSolver(Sudoku *s){
    loop: //goto statement is used to run loop again and again until its completed.
    for(char i='1'; i<='9'; i++){
        if(xCounter(s)!=0){
        BoxSolver b;
        b.s= s;
        b.Box1(i);
        b.Box2(i);
        b.Box3(i);
        b.Box4(i);
        b.Box5(i);
        b.Box6(i);
        b.Box7(i);
        b.Box8(i);
        b.Box9(i);
        }
        else{
            std::cout<<"Sudoku is completed"<<std::endl;
            return;
        }
}
goto loop; 
}
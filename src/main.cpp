#include <iostream>
#include <fstream>
#include <string>
#include "sudoku.h"
#include "xcounter.h"
#include "sudokusolver.h"
#include "display.h"

int main()
{   
    std::cout<<"----------WELCOME TO SUDOKU SOLVER----------"<<std::endl;
    std::cout<<"RULES:"<<std::endl;
    std::cout<<"1. Enter the sudoku line by line, or, row by row, without spaces."<<std::endl;
    std::cout<<"2. After every line, press space or enter."<<std::endl;
    std::cout<<"3. Input integer (1-9) for numbers, and in case of a blank block, input X."<<std::endl;
    std::cout<<"4. Example line: XXX26X7X1"<<std::endl;

    std::ofstream file("source.txt", std::ios::trunc); 
    if (!file){
        std::cout<<"Could not open file."<<std::endl;
        return 1;
    }
    std::string row;
    std::cout<<"Enter the new Sudoku (9 rows):"<<std::endl;
    for(int i=0; i<9; i++){
        std::cin>>row;         
        file<<row<<std::endl;
    }
    file.close();

    Sudoku s("source.txt");
    if (!s.isValid){
        std::cout<<"The Sudoku is not valid"<<std::endl;
    }
    else{
        sudokuSolver(&s);
        display(&s);
    }
}
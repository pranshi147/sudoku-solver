#include <iostream>
#include <fstream>
#include <string>
#include "sudoku.h"
#include "xcounter.h"
#include "sudokusolver.h"
#include "display.h"

int main()
{   
    std::cout<<std::endl<<"----------WELCOME TO SUDOKU SOLVER----------"<<std::endl<<std::endl;
    std::cout<<"RULES:"<<std::endl;
    std::cout<<"1. Enter the sudoku line by line, or, row by row, without spaces."<<std::endl;
    std::cout<<"2. After every line, press space or enter, OR, you can also paste a whole sudoku in the same format as given in the sample."<<std::endl;
    std::cout<<"3. Input integer (1-9) for numbers, and in case of a blank block, input X."<<std::endl;

    std::cout<<std::endl<<"Sample Sudoku:"<<std::endl;
    std::cout<<"XXX26X7X1"<<std::endl;
    std::cout<<"68XX7XX9X"<<std::endl;
    std::cout<<"19XXX45XX"<<std::endl;
    std::cout<<"82X1XXX4X"<<std::endl;
    std::cout<<"XX46X29XX"<<std::endl;
    std::cout<<"X5XXX3X28"<<std::endl;
    std::cout<<"XX93XXX74"<<std::endl;
    std::cout<<"X4XX5XX36"<<std::endl;
    std::cout<<"7X3X18XXX"<<std::endl<<std::endl;
  
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
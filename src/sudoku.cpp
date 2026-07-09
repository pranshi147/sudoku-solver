#include "sudoku.h"
#include<cstring>
#include<string>
#include<fstream>

Sudoku::Sudoku(std::string fileName) {
    isValid = false;
    readFile(fileName);   
    Validator v(this);
    isValid = v.overallCheck(); //Validity of the sudoku is checked in the beginning only.
}

void Sudoku::readFile(std::string fileName)
{
    std::ifstream file(fileName);
    std::string text;
    int row = 0;
    while (std::getline(file, text) && row < 9)
    {
        for (int col = 0; col < 9; col++)
        {
            box[row][col] = text[col];
        }
        row++;
    }
}

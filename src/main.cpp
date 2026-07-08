#include <iostream>
#include <fstream>
#include "sudoku.h"
#include "xcounter.h"

int main()
{   
    Sudoku s("source.txt");

    std::ifstream source("source.txt");
    std::ofstream destination("solution.txt");
    destination << source.rdbuf();
    source.close();
    destination.close();

    if (s.isValid){
        std::cout << xCounter(&s)<<"\n";

}
}
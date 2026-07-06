#include <iostream>
#include "sudoku.h"
#include "xcounter.h"

int main()
{
    Sudoku s("source.txt");
    std::cout << "After constructor\n";
    if (s.isValid)
        std::cout << xCounter(&s)<<"\n";
    else
        std::cout << "Invalid\n";
}
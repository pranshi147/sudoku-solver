#include<iostream>
#include "validation.h"

using namespace std;

int main(){
    isValid sudoku;
    if(!sudoku.overallCheck()) cout<<"This sudoku is not valid";
    else cout<<"This is a valid sudoku";
}

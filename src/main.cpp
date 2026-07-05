#include<iostream>
#include "validation.h"
#include "xfinder.h"

using namespace std;

int main(){
    Validator isValid;
    if(!isValid.overallCheck()) cout<<"This sudoku is not valid"<<endl;
    else cout<<"This is a valid sudoku"<<endl;
    if(XFinder(isValid.getBox())) cout<<"Sudoku is incomplete"<<endl;
    else cout<<"Sudoku is complete"<<endl;
}

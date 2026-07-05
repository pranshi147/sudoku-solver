#include<iostream>
#include "validation.h"
#include "sudoku.h"
#include "frequency.h"

using namespace std;

int main(){
    Validator isValid;
    cout<<frequency(isValid.sudoku.box[9]);

}

#include<iostream>
#include "xfinder.h"

bool XFinder(char arr[9][9]){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(arr[i][j]=='X') return true;
        }
    }
    return false;
}
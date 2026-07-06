#include<iostream>
#include<fstream>
#include<string>
#include "validation.h"
#include "sudoku.h" // included here to avoid circular imports
#include <cstring>

using namespace std;
Validator::Validator(Sudoku* s)
{
    this->s = s;
}
bool Validator::checkRows(){
    for(int i=0; i<9; i++){
        char arr[9];
        memset(arr, '0', sizeof(arr));
        for(int j=0; j<9; j++){
            if(this->s->box[i][j]=='X') continue;
            else if(arr[this->s->box[i][j]-'1']=='1') return false;
            else arr[this->s->box[i][j]-'1']='1';
        }
    }
    return true;  
}

bool Validator::checkColumns(){
    for(int i=0; i<9; i++){
        char arr[9];
        memset(arr, '0', sizeof(arr));
        for(int j=0; j<9; j++){
            if(this->s->box[j][i]=='X') continue;
            else if(arr[this->s->box[j][i]-'1']=='1') return false;
            else arr[this->s->box[j][i]-'1']='1';
        }
    }
    return true;  
}

bool Validator::boxCheck(){
    char arr[9];
    int i=0;
    int k;
    again:
    k=i+3;
    memset(arr, '0', sizeof(arr));
    for(i; i<k; i++){
        for(int j=0; j<3; j++){
            if(this->s->box[i][j]=='X') continue;
            else if(arr[this->s->box[i][j]-'1']=='1') return false;
            else arr[this->s->box[i][j]-'1']= '1';
        }
    }
    if(k!=9) goto again;

    i=0;
    again2:
    k=i+3;
    memset(arr, '0', sizeof(arr));
    for(i; i<k; i++){
        for(int j=3; j<6; j++){
            if(this->s->box[i][j]=='X') continue;
            else if(arr[this->s->box[i][j]-'1']=='1') return false;
            else arr[this->s->box[i][j]-'1']= '1';
        }
    }
    if(k!=9) goto again2;

    i=0;
    again3:
    k=i+3;
    memset(arr, '0', sizeof(arr));
    for(i; i<k; i++){
        for(int j=6; j<9; j++){
            if(this->s->box[i][j]=='X') continue;
            else if(arr[this->s->box[i][j]-'1']=='1') return false;
            else arr[this->s->box[i][j]-'1']= '1';
        }
    }
    if(k!=9) goto again3;
    return true;
}

bool Validator::overallCheck(){
    if(!checkRows()) return false;
    if(!checkColumns()) return false;
    if(!boxCheck()) return false;
    return true;
}
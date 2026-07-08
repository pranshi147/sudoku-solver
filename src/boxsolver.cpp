#include "sudoku.h"
#include "boxsolver.h"
#include "rowsolver.h"
#include "columnsolver.h"
#include <fstream>
#include <string>
using namespace std;

void BoxSolver::editor(int row, int place, char a){
    fstream file("solution.txt", ios::in | ios::out);
    string line;
    streampos pos = 0;
    for(int i = 1; i < row; i++) {
        getline(file, line);
        pos = file.tellg();
    }
    file.seekp(pos + place);
    file.put(a);
    file.close();
}

void BoxSolver::Box1(char a){
    int total=0;
    int row1;
    int column1;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(this->s->box[i][j]== a){
                return;
            }
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(this->s->box[i][j]== 'X'){
                if(rowSolver(this->s, &i, a)){
                    if(columnSolver(this->s, &j, a)){
                        row1=i;
                        column1=j;
                        total++;
                    }
                }
        }
    }  
}
if (total!=1) return;
else{
    this->editor(row1, column1, a);
}
}


void BoxSolver::Box2(char a){
    int total=0;
    int row1;
    int column1;
    for(int i=3; i<6; i++){
        for(int j=0; j<3; j++){
            if(this->s->box[i][j]== a){
                return;
            }
        }
    }

    for(int i=3; i<6; i++){
        for(int j=0; j<3; j++){
            if(this->s->box[i][j]== 'X'){
                if(rowSolver(this->s, &i, a)){
                    if(columnSolver(this->s, &j, a)){
                        row1=i;
                        column1=j;
                        total++;
                    }
                }
        }
    }  
}
if (total!=1) return;
else{
    this->editor(row1, column1, a);
}
}


void BoxSolver::Box3(char a){
    int total=0;
    int row1;
    int column1;
    for(int i=6; i<9; i++){
        for(int j=0; j<3; j++){
            if(this->s->box[i][j]== a){
                return;
            }
        }
    }

    for(int i=6; i<9; i++){
        for(int j=0; j<3; j++){
            if(this->s->box[i][j]== 'X'){
                if(rowSolver(this->s, &i, a)){
                    if(columnSolver(this->s, &j, a)){
                        row1=i;
                        column1=j;
                        total++;
                    }
                }
        }
    }  
}
if (total!=1) return;
else{
    this->editor(row1, column1, a);
}
}


void BoxSolver::Box4(char a){
    int total=0;
    int row1;
    int column1;
    for(int i=0; i<3; i++){
        for(int j=3; j<6; j++){
            if(this->s->box[i][j]== a){
                return;
            }
        }
    }

    for(int i=0; i<3; i++){
        for(int j=3; j<6; j++){
            if(this->s->box[i][j]== 'X'){
                if(rowSolver(this->s, &i, a)){
                    if(columnSolver(this->s, &j, a)){
                        row1=i;
                        column1=j;
                        total++;
                    }
                }
        }
    }  
}
if (total!=1) return;
else{
    this->editor(row1, column1, a);
}
}


void BoxSolver::Box5(char a){
    int total=0;
    int row1;
    int column1;
    for(int i=3; i<6; i++){
        for(int j=3; j<6; j++){
            if(this->s->box[i][j]== a){
                return;
            }
        }
    }

    for(int i=3; i<6; i++){
        for(int j=3; j<6; j++){
            if(this->s->box[i][j]== 'X'){
                if(rowSolver(this->s, &i, a)){
                    if(columnSolver(this->s, &j, a)){
                        row1=i;
                        column1=j;
                        total++;
                    }
                }
        }
    }  
}
if (total!=1) return;
else{
    this->editor(row1, column1, a);
}
}


void BoxSolver::Box6(char a){
    int total=0;
    int row1;
    int column1;
    for(int i=6; i<9; i++){
        for(int j=3; j<6; j++){
            if(this->s->box[i][j]== a){
                return;
            }
        }
    }

    for(int i=6; i<9; i++){
        for(int j=3; j<6; j++){
            if(this->s->box[i][j]== 'X'){
                if(rowSolver(this->s, &i, a)){
                    if(columnSolver(this->s, &j, a)){
                        row1=i;
                        column1=j;
                        total++;
                    }
                }
        }
    }  
}
if (total!=1) return;
else{
    this->editor(row1, column1, a);
}
}


void BoxSolver::Box7(char a){
    int total=0;
    int row1;
    int column1;
    for(int i=0; i<3; i++){
        for(int j=6; j<9; j++){
            if(this->s->box[i][j]== a){
                return;
            }
        }
    }

    for(int i=0; i<3; i++){
        for(int j=6; j<9; j++){
            if(this->s->box[i][j]== 'X'){
                if(rowSolver(this->s, &i, a)){
                    if(columnSolver(this->s, &j, a)){
                        row1=i;
                        column1=j;
                        total++;
                    }
                }
        }
    }  
}
if (total!=1) return;
else{
    this->editor(row1, column1, a);
}
}


void BoxSolver::Box8(char a){
    int total=0;
    int row1;
    int column1;
    for(int i=3; i<6; i++){
        for(int j=6; j<9; j++){
            if(this->s->box[i][j]== a){
                return;
            }
        }
    }

    for(int i=3; i<6; i++){
        for(int j=6; j<9; j++){
            if(this->s->box[i][j]== 'X'){
                if(rowSolver(this->s, &i, a)){
                    if(columnSolver(this->s, &j, a)){
                        row1=i;
                        column1=j;
                        total++;
                    }
                }
        }
    }  
}
if (total!=1) return;
else{
    this->editor(row1, column1, a);
}
}


void BoxSolver::Box9(char a){
    int total=0;
    int row1;
    int column1;
    for(int i=6; i<9; i++){
        for(int j=6; j<9; j++){
            if(this->s->box[i][j]== a){
                return;
            }
        }
    }

    for(int i=6; i<9; i++){
        for(int j=6; j<9; j++){
            if(this->s->box[i][j]== 'X'){
                if(rowSolver(this->s, &i, a)){
                    if(columnSolver(this->s, &j, a)){
                        row1=i;
                        column1=j;
                        total++;
                    }
                }
        }
    }  
}
if (total!=1) return;
else{
    this->editor(row1, column1, a);
}
}
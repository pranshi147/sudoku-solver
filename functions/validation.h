#ifndef VALIDATION_H
#define VALIDATION_H

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class isValid{
    public:
        isvalid();
        bool checkRows();
        bool checkColumns();
        bool overallCheck();
};

#endif
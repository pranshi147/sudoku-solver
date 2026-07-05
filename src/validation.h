#ifndef VALIDATION_H
#define VALIDATION_H

class Validator{
    private:
        char box[9][9];
    public:
        Validator();
        char (*getBox())[9];
        bool checkRows();
        bool checkColumns();
        bool boxCheck();
        bool overallCheck();
};

#endif
#ifndef VALIDATION_H
#define VALIDATION_H

class isValid{
    private:
        char box[9][9];
    public:
        isValid();
        bool checkRows();
        bool checkColumns();
        bool boxCheck();
        bool overallCheck();
};

#endif
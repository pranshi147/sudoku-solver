#include "sudoku.h"
#include "frequency.h"
#include<cstring>

using namespace std;
char frequency(Sudoku *s)
{
    int arr[9] = {0};
    int maxFreq = 0;
    char mostF = 'X';
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(s->box[i][j] == 'X') continue;
            int index = s->box[i][j] - '1';
            arr[index]++;
            if(arr[index] > maxFreq)
            {
                maxFreq = arr[index];
                mostF = s->box[i][j];
            }
        }
    }

    return mostF;
}
#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
    for(int i=0; i<mCols; i++)
    {
        for(int j=0; j<=nRows-1; j++)
        {
            cout<<input[j][i]<<" ";
        }

        i++;
        if(i>mCols-1)
        {
            break;
        }

        for(int j=nRows-1; j>=0; j--)
        {
            cout<<input[j][i]<<" ";
        }
    }
}
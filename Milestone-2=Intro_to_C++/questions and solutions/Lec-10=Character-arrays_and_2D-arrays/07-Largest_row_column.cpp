#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    int arr[nRows + mCols];
    int sum = 0;
    int largest = -2147483648;
    int index_row = -1;
    int index_col = -1;

    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            sum += input[i][j];
        }
        arr[i] = sum;
        sum = 0;
    }

    for (int i = 0; i < mCols; i++)
    {
        for (int j = 0; j < nRows; j++)
        {
            sum += input[j][i];
        }
        arr[nRows + i] = sum;
        sum = 0;
    }

    for (int i = 0; i < mCols + nRows; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            if (i >= nRows)
            {
                index_col = i - nRows;
                index_row = -1;
            }
            else
            {
                index_row = i;
                index_col = -1;
            }
        }
    }

    if (index_col == -1 && index_row != -1)
    {
        cout << "row " << index_row << " " << largest;
    }
    else if (index_col != -1 && index_row == -1)
    {
        cout << "column " << index_col << " " << largest;
    }
    else
    {
        cout << "row " << 0 << " " << largest;
    }
}
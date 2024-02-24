#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols) {
  if(nRows ==0 || nCols == 0)
  {
    return;
  }
  int nElements = nRows * nCols ;
  int colStart, colEnd, rowStart, rowEnd, i, j;
  colStart = 0;
  colEnd = nCols - 1;
  rowStart = 0;
  rowEnd = nRows - 1;
  int count  =0; 
  while (count <nElements) {
    for (j = colStart; count <nElements &&j <= colEnd; j++) 
    {
      cout << input[rowStart][j] << ' ';
      count++;
    }
    rowStart++;
    for (i = rowStart;count <nElements && i <= rowEnd; i++) 
    {
      cout << input[i][colEnd] << ' ';
      count++;
    }
    colEnd--;
    for (j = colEnd;count <nElements && j >= colStart; j--) 
    {
      cout << input[rowEnd][j] << ' ';
      count++;
    }
    rowEnd--;
    for (i = rowEnd;count <nElements && i >= rowStart; i--) 
    {
      cout << input[i][colStart] << ' ';
      count++;
    }
    colStart++;
  }
}
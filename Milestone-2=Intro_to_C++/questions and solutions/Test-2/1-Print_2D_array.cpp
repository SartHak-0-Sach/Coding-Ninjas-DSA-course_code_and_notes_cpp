#include <iostream>
using namespace std;

void print2DArray(int input[][1000], int row, int col) {
	for(int i = 0; i<row; i++)
	{
		for(int j = i; j<row; j++)
		{
			for(int k = 0; k<col; k++)
			{
				cout<<input[i][k]<<" ";
			}
			cout<<endl;
		}
	}
}
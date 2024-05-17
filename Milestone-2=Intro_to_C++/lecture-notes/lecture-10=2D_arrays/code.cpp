#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; // represents the way of implementing a 2-d array with 3 rows and 4 columns
    // int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; // another way of implementing a 2-d array with 3 rows and 4 columns
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // way of printing a 2-d array using 2 nested loops
    return 0;
}

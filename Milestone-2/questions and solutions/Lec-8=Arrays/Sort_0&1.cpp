#include <iostream>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    // int temp=0;
    // for (i = 0; i < size - 1; i++)
    // {
    //   for (j = 0; j < size - i - 1; j++)
    //   {
    //     if (input[j] > input[j + 1])
    //     {
    //       temp=input[j+1];
    //       input[j+1]=input[j];
    //       input[j]=temp;
    //     }
    //   }
    int ct = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == 0)
            ct++;
    }
    int i = 0;
    for (i = 0; i < ct; i++)
        input[i] = 0;
    for (; i < size; i++)
        input[i] = 1;
}

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    int *input = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    sortZeroesAndOne(input, size);
    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
    delete[] input;
    return 0;
}
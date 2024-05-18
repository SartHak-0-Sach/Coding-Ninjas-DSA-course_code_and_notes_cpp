#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // dynamically allocating memory to array and performing arithmatic operations on it
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
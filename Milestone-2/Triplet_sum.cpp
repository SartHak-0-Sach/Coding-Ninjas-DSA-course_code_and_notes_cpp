#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (i == j || j == k || i == k)
                {
                    continue;
                }
                else if (input[i] + input[j] + input[k] == x)
                {
                    count += 1;
                }
            }
        }
    }
    count = count / 6;
    return count;
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
    int x;
    cin >> x;
    cout << tripletSum(input, size, x) << endl;
    delete[] input;
    return 0;
}
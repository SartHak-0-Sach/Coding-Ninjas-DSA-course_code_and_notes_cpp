#include <iostream>
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (input1[i] == input2[j])
            {
                cout << input1[i] << " ";
                input1[i] = -1;
                input2[j] = -1;
                break;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int size1;
    cin >> size1;
    int *input1 = new int[size1];
    for (int i = 0; i < size1; ++i)
    {
        cin >> input1[i];
    }
    int size2;
    cin >> size2;
    int *input2 = new int[size2];
    for (int i = 0; i < size2; ++i)
    {
        cin >> input2[i];
    }
    intersection(input1, input2, size1, size2);
    delete[] input1;
    delete[] input2;
    return 0;
}

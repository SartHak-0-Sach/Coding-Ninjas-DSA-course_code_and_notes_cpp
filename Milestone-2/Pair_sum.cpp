#include <iostream>
using namespace std;

int pairSum(int *input, int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (input[i] + input[j] == x)
            {
                count += 1;
            }
        }
    }
    count = count / 2;
    return count;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int *input = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << pairSum(input, n, x);
    delete[] input;
    return 0;
}

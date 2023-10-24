#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (arr[i] == arr[j])
            {
                return arr[i];
                arr[i] = -1;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << duplicateNumber(arr, n);
    return 0;
}

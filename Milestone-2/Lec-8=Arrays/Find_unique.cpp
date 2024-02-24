#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
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
                arr[i] = -1;
                arr[j] = -1;
            }
        }
    }
    for (int a = 0; a < size; a++)
    {
        if (arr[a] < 0)
        {
            continue;
        }
        else
        {
            return arr[a];
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
    cout << findUnique(arr, n);
    return 0;
}

#include <iostream>
#include <climits>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main()
{
    int n;
    cin >> n;
    if (n > 1)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bubbleSort(a, n);
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                if (a[j] == a[k])
                {
                    a[j] = 0;
                }
            }
        }
        bubbleSort(a, n);
        if (a[n - 2] == 0)
        {
            cout << "-2147483648";
        }
        else
        {
            cout << a[n - 2];
        }
    }
    else
    {
        cout << "-2147483648";
    }
}
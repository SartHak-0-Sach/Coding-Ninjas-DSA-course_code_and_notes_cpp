#include <iostream>
using namespace std;

void swapAlternate(int *arr, int size)
{
    int temp = 0;
    for (int i = 0; i < size - 1; i = i + 2)
    {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    swapAlternate(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

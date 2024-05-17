#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    for (int i = 1; (2 * i) - 1 <= n; i++)
    {
        arr[i - 1] = (2 * i) - 1;
    }
    for (int j = 1; 2 * j <= n; j++)
    {
        arr[n - j] = 2 * j;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    arrange(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

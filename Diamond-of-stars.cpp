#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = n / 2;
    for (int i = 1; i <= n - 1; i = i + 2)
    {
        for (int a = 0; a < count; a++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
        count--;
    }

    for (int k = 0; k < n; k++)
    {
        cout << "*";
    }
    cout << endl;

    int count1 = n / 2;
    for (int l = n - 1; l > 0; l = l - 2)
    {
        for (int b = count1; b <= n / 2; b++)
        {
            cout << " ";
        }
        for (int m = l; m > 1; m--)
        {
            cout << "*";
        }
        cout << endl;
        count1--;
    }
}
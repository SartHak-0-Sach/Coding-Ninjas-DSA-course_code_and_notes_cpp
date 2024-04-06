#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    for (int k = 1; k <= m; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i;
        }
        for (int l = 2 * (m - n); l > 0; l--)
        {
            cout << "*";
        }
        for (int j = n; j >= 1; j--)
        {
            cout << j;
        }
        n--;
        cout << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k < n; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << i + j;
        }
        cout << endl;
    }
}

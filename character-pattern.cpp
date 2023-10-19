#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            char d = c + j + i - 1;
            cout << d;
        }
        cout << endl;
    }
}
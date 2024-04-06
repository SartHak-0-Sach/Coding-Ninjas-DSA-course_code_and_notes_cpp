#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n;
    cin >> n;
    char character = 'A';
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << character;
        }
        cout << "\n";
        character++;
    }
    return 0;
}
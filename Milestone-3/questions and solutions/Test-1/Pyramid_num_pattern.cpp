#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // loop for spaces
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        // loop for decreasing numbers
        for (int k = 1; k < i; k++)
        {
            cout << i - k + 1;
        }

        cout << "1";

        // loop for increasing numbers
        for (int l = 1; l < i; l++)
        {
            cout << l + 1;
        }

        // loop for spaces
        for (int m = n - i; m > 0; m--)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}

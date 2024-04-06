#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int count = 0;
    for (int j = 1; j <= x + count; j++)
    {
        int a = (3 * j) + 2;
        if (a % 4 == 0)
        {
            count += 1;
            continue;
        }
        cout << a << " ";
    }
}

#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    int power = 1;
    for (int i = 0; i < n; i++)
    {
        power *= x;
    }
    cout << power;
}

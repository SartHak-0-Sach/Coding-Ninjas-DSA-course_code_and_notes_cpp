#include <iostream>
using namespace std;

int sum(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        count += i;
    }
    return count;
}

int product(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        count *= i;
    }
    return count;
}

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int c;
    cin >> c;
    if (c == 1)
    {
        cout << sum(n);
    }
    else if (c == 2)
    {
        cout << product(n);
    }
    else
    {
        cout << "-1";
    }
}

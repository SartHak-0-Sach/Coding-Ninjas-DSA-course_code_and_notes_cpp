#include <iostream>
using namespace std;

int addNum(int a, int b) {return a + b;}

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

void increment(int a)
{
    a = a + 1;
}

int main() {
    int x = 5;
    int y = 10;
    cout << addNum(x, y) << endl;

    int a;
    cin >> a;
    int output = fact(a);
    // cout << ans << endl;
    // cout << n << endl;
    cout << output << endl;

    a = 10;
    increment(a);
    cout << a << endl;

    return 0;
}
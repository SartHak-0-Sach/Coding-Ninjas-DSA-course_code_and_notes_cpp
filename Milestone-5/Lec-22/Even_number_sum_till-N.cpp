#include <bits/stdc++.h>
using namespace std;

int nEvenSum(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
        if (i % 2 == 0)
        {
            sum += i;
        }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << nEvenSum(n);
    return 0;
}
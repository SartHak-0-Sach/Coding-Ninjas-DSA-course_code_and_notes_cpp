#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count += a[i];
    }
    cout << count;
}
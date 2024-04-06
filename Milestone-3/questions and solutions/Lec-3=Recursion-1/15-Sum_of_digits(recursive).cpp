#include <iostream>
using namespace std;

bool armstrong(int n)
{
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    int n;
    cin >> n;
    cout << armstrong(n) << endl;
    return 0;
}

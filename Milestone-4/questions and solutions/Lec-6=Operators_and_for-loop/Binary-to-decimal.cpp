#include <iostream>
using namespace std;

int main()
{
    int last_digit = 1;
    int n;
    cin >> n;
    int base_value = 1;
    int count = 0;
    while (n > 0)
    {
        last_digit = n % 10;
        n = n / 10;
        count = count + last_digit * base_value;
        base_value *= 2;
    }
    cout << count;
}
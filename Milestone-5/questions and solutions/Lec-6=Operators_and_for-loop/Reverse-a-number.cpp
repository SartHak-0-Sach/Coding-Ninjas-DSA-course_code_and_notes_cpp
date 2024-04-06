#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int last_digit = 1;
    if (n > 0)
    {
        while (n > 0)
        {
            last_digit = n % 10;
            if (last_digit == 0)
            {
                n = n / 10;
            }
            else
            {
                break;
            }
        }
        while (n > 0)
        {
            last_digit = n % 10;
            n = n / 10;
            cout << last_digit;
        }
    }
    else
    {
        cout << "0";
    }
}
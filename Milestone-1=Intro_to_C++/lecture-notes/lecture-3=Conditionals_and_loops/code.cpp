#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
    int n;
     cout << "Enter n" << endl;

     cin >> n;

     int i = 1;
     while (i <= n) {
         cout << i << endl;
         i = i + 1;
     }
     */

    /*
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int d = 2;
    bool divided = false;
    while (d < n) {
        if (n % d == 0) {
            cout << "Not Prime" << endl;
            divided = true;
        }
        d = d + 1;
    }
    if (!divided) {
        cout << "Prime" << endl;
    }
    */

    int n;
    cin >> n;
    if (n < 12)
    {
        cout << "n is less than 12" << endl;
    }
    else if (n == 12)
    {
        cout << "n is equal to 12" << endl;
    }
    else
    {
        cout << "n is greater than 12" << endl; // else if statement application
    }

    while (n > 10)
    {
        cout << "n is greater than 10" << endl; // while loop
    }
    return 0;
}

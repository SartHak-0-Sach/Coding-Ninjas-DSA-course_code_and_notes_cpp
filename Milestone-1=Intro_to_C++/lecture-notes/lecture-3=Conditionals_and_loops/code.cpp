#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
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

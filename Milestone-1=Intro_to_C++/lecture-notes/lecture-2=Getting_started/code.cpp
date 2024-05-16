#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, World!"; // first program

    int a = 13;
    float b = 234.778;
    bool c = true;
    double d = 255678.34453442;
    char e = 'A';
    string f = "Hello from the other side"; // variables and datatypes

    cin >> a >> b >> c >> d >> e >> f; // taking input

    if (a > 4 || b <= 23.2 && e != 'V') // conditionals and operators
    {
        cout << "if statement executed";
    }
    else
    {
        cout << "else statement executed";
    }
    return 0;
}
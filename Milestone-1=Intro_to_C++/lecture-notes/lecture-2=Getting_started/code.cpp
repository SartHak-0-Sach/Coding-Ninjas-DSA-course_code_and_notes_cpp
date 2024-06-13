#include <iostream>
using namespace std;

int main()
{
    cout << "Hello" << "\n"; // first program

    /*
    int a;
    int b;

    cout << "Enter the numbers" << endl;
    cin >> a >> b;

    int c = a + b;

    cout << c << endl;
    */

    /*
    char a = 234354;
     cout << a << endl;
     unsigned int b = -123;
     cout << b << endl;
     */

    /*
    int f;
    cout << "Enter Fah Value" << endl;
    cin >> f;
    int c = (5.0/9) * (f - 32);
    c = (5 * (f - 32))/9;

    int r = 10 % 3;

    cout << 10 % 3 << endl;
    cout << c << endl;

    int a;
    int b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;

    bool isEqual = (a == b);
    bool isAGreater = (a > b);
    bool isALess = (a < b);
    cout << "Are they Equal " << isEqual << endl;
    cout << "is A greater " << isAGreater << endl;
    cout << "is A less " << isALess << endl;

    bool third = isEqual && isAGreater;
    bool fourth = isEqual || isAGreater;

    cout << "Not equal " << !isEqual << endl;
    */

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
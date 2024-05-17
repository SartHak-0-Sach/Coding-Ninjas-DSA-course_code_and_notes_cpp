#include <iostream>
#include <string>
#include <cstring> // header files related to strings
using namespace std;

int main(int argc, char const *argv[])
{
    string a;
    a = "Hi there!";
    cout << a << endl;
    string b = " Welcome to my world!!";

    string c = a + b; // easiest way of combining two strings

    // Caution- '+' is the only arithmatic operator eligible for use in strings

    cout << "Length of string c is:- " << c.length() << endl;

    string d = a.append(b); // another way of combining two strings

    if (c == d)
        cout << "Both strings are equal." << endl;

    return 0;
}
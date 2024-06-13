#include <iostream>
#include <string>
#include <algorithm>
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

    string word;
    cin >> word;

    // word-
    // begin -> 'w'
    // end -> '-'
    //(L,R) => [L,R)
    // begin -> 0
    //(1 , 3) => (1 , 2)
    sort(word.begin() + 1, word.begin() + 3 + 1);

    cout << word;

    string text = "hellell";
    string pat = "lle";

    // cin>>text;

    if (text.find(pat) == string::npos)
    {
        cout << "No Match";
    }
    else
    {
        cout << "Match found at index " << text.find(pat);
    }

    return 0;
}
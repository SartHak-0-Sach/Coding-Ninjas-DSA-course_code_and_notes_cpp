#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {

    for (int len = 1; len <= strlen(input); len++)
    {
        for (int i = 0; i <= strlen(input) - len; i++)
        {
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
            {
                cout << input[k];
            }
            cout << endl;
        }
    }
}
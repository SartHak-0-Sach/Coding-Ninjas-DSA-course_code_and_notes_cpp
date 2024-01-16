#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void printSubstrings(string input) {
    for(int i = 0; i<input.size(); i++)
    {
        for(int j = i; j < input.size(); j++)
        {
            for(int k = i; k<=j; k++)
            {
                cout<<input[k];
            }
            cout<<endl;
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string removeConsecutiveDuplicates(string str) 
{
    std::string result;
    char prevChar = '\0';

    for (char currentChar : str) {
        if (currentChar != prevChar) {
            result += currentChar;
            prevChar = currentChar;
        }
    }

    return result;
}
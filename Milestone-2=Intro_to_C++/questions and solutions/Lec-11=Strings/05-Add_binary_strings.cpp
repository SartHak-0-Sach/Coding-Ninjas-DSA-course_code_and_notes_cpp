#include <iostream>
using namespace std;

string addBinaryString(string &a, string &b, int n, int m)
{
    string result = "";
    int carry = 0;

    // Iterate through the binary strings from right to left
    while (n > 0 || m > 0 || carry > 0) {
        // Extract the current bits from both strings (or use 0 if the string is exhausted)
        int bitA = (n > 0) ? (a[--n] - '0') : 0;
        int bitB = (m > 0) ? (b[--m] - '0') : 0;

        // Calculate the sum of bits and the carry
        int bitSum = bitA + bitB + carry;
        result = to_string(bitSum % 2) + result;
        carry = bitSum / 2;
    }

    return result;
}
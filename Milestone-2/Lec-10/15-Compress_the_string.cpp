#include <iostream>
#include <string>

using namespace std;

string getCompressedString(string &input) {
    string ans;
    int size = input.length();
    for (int i = 0; i < size; i++) {
        ans.push_back(input[i]);
        if (i + 1 < size && input[i] == input[i + 1]) {
            int count = 1;
            int j = i + 1;  // Start from the next character
            for (; j < size && input[j] == input[i]; j++) {
                count++;
            }
            ans.push_back('0' + count);  // Convert count to character before pushing
            i = j - 1;  // Update i to the last repeated character index
        }
    }
    return ans;
}
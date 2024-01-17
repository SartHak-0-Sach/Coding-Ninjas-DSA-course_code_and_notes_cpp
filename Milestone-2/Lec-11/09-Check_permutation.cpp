#include <iostream>
#include <string>
#include <array>

bool areAnagram(const std::string &str1, const std::string &str2) {
    // Assuming ASCII characters, you may need a larger array for extended character sets.
    const int CHAR_COUNT = 256; // Assuming ASCII characters
    std::array<int, CHAR_COUNT> hashArray = {0};

    // Increment count for characters in str1
    for (char ch : str1) {
        hashArray[ch]++;
    }

    // Decrement count for characters in str2
    for (char ch : str2) {
        hashArray[ch]--;
    }

    // Check if all counts are zero
    for (int count : hashArray) {
        if (count != 0) {
            return false;
        }
    }

    return true;
}

// can also be done using sorting and comparing each element using one loop but this method is faster
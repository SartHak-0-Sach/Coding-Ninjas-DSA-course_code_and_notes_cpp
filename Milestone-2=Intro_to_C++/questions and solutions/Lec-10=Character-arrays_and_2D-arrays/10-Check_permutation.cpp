#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    int size1 = strlen(input1);
    int size2 = strlen(input2);

    if(size1!=size2)
    return false;

    std::sort(input1, input1+size1);
    std::sort(input2, input2+size2);

    for(int i = 0; i<size1; i++)
    {
        if(input1[i]!=input2[i])
        return false;
    }
    return true;
}
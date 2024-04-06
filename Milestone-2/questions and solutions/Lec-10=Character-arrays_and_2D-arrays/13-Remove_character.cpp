#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {

    int n = strlen(input);

    int index = 0;
    
    for(int i = 0; i<n; i++)
    {
        if(input[i]!=c)
        swap(input[i], input[index++]);
    }

    input[index] = '\0';
}

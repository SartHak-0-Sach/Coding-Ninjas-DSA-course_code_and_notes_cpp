#include <iostream>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {
    int i = 0;
    while(input[i]!='\0')
    {
        if(input[i]==c1)
        input[i]=c2;

        i++;
    }
}
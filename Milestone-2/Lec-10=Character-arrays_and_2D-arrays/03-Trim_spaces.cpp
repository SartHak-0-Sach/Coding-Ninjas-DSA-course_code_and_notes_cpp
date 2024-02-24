#include <iostream>
#include <string>
#include <vector>
using namespace std;

void trimSpaces(char input[]) {
    vector<char> ans;
    int i = 0;
    while(input[i]!='\0')
    {
        if(input[i]!=' ')
        ans.push_back(input[i]);
        i++;
    }

    for(int j = 0; input[j]!='\0'; j++)
    {
        input[j]=ans[j];
    }
}
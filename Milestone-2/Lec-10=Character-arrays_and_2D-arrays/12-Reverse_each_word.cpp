#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void reverseEachWord(char input[])
{
    int start,i=0;
    int end;
     while(input[i]!='\0')
        {
            if(i>strlen(input)) break;
            start=i;
            while(input[i]!=' ' and input[i]!='\0')
            {
                i++;
            }
            end=i-1;
            while(start<=end)
            {
                int temp=input[start];
                input[start]=input[end];
                input[end]=temp;
                end--;
                start++;
            }
            i++;
        }
}
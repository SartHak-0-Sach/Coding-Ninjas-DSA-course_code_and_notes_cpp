#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

// void swap(char a, char b)
// {
//     char c = a;
//     a=b;
//     b=c;
// }

int main()
{
    string str;
    getline(cin, str);
    int start = 0;
    int end = 0;
    for(int i = 0; str[i]!= '\0'; i++)
    {
        if(str[i]==' ')
        {
            end = i-1;
             reverse(str.begin() + start, str.begin() + end + 1);
            // while(start<end)
            // {
            //     swap(str[start], str[end]);
            //     start++;
            //     end--;
            // }
            start=i+1;
        }
    }
    reverse(str.begin() + start, str.end());
    cout << str << endl;
}
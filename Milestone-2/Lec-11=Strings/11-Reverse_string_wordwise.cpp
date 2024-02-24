#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    string ans;
    int start = 0;
    int n = input.length();
    
    for(int i = n-1; i >= 0; i--)
    {
        if(input[i] == ' ')
        {
            int temp = i + 1;
            while(input[temp] != ' ' && input[temp] != '\0')
            {
                ans.push_back(input[temp++]);
            }
            ans.push_back(' ');
        }
    }
    
    int temp = 0;
    while(input[temp] != ' ' && input[temp] != '\0')
    {
        ans.push_back(input[temp++]);
    }
    
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;

    return 0;
}
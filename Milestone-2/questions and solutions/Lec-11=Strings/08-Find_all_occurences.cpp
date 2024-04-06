#include<iostream>
#include<string>
using namespace std;

int main(){
    int a = 0;
    string str;
    cin>>str;
    string pat;
    cin>>pat;
    for(int i = 0; i<str.size()-pat.size()+1; i++)
    {
        bool check = true;
        for(int j = 0; j<pat.size(); j++)
        {
            if(str[i+j]!=pat[j])
            check = false;
        }
        if(check)
        cout<<i<<" ";
    }
    return 0;
}
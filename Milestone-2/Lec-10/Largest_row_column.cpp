#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string str) {
    int i = 0;
    int j = str.size()-1;
    bool flag = true;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }
    return flag;
}

int main(int argc, char const *argv[])
{
  string str;
  cin>>str;
  if(checkPalindrome(str))
  cout<<"Palindrome"<<endl;
  else
  cout<<"Not a Palindrome"<<endl;
  return 0;
}

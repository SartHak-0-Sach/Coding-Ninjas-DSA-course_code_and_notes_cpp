#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"1";
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"0";
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
int main() {
  char c;
  cin>>c;
  if(c>='a' && c<='z')
  {
    cout<<"0";
  }
  else if(c>='A' && c<='Z')
  {
    cout<<"1";
  }
  else
  {
    cout<<"-1";
  }
}
*/
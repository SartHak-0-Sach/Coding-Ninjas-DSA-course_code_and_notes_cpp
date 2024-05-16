#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++) // for loops
    {
        int a, b;
        cin>>a>>b;
        if(a>b)
        {
            cout<<">"<<endl; // operators
        }
        else if(a<b)
        {
            cout<<"<"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }
    return 0;
}
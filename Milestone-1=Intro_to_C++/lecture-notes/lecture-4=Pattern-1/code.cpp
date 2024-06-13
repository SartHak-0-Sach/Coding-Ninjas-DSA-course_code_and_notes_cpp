#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    /*
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    /*
    int n;
     cin>>n;
     int i=1;
     int k=1;
     while(i<=n){
         int j=1;
         while(j<=i){
             cout<<k;
             k++;
             j++;
         }
         cout<<endl;
         i++;


     }
    */

    /*
    int n;
     cin>>n;
     int i=1;
     int k=1;
     while(i<=n){
         int j=1;
         char startChar='A'+i-1;
         while(j<=n){
             char ch=startChar+j-1;
             cout<<ch;

             j++;
         }
         cout<<endl;
         i++;
     }
    */
}
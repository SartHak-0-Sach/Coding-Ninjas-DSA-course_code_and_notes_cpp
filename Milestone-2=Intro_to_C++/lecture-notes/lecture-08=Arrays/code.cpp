#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[11];
    for (int i = 0; i < 11; i++)
    {
        cin>>arr2[i];
    }
    // int arr3[11]=arr2; // is not the correct form of declaring arrays

    int arr3[11]={1};
    cout<<arr3[5];

    int arr4[12] = {5};
    cout<<arr4[8];
    return 0;
}
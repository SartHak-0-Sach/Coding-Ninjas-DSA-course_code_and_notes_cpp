#include <iostream>
#include <vector>
using namespace std;

void binarySearch()
{
    int arr[15]={1,29,3,644,55,36,7,8,98,10,161,12,114,15,13}; // searching
    int n=15;
    int key=36;
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Element found at index "<<mid<<endl;
            return;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<"Element not found"<<endl;
}

int* bubbleSort() 
{
    int arr[15]={1,29,3,644,55,36,7,8,98,10,161,12,114,15,13}; // example of sorting
    int n=15;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}

int main(int argc, char const *argv[])
{
    int arr[15]={1,29,3,644,55,36,7,8,98,10,161,12,114,15,13};
    return 0;
}
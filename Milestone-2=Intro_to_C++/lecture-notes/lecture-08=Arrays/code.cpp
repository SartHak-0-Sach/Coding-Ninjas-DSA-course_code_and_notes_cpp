#include <iostream>
#include <climits>
using namespace std;

void printArray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}

void increment(int a, int b[], int n)
{
    a++;
    b[0]++;
}

void reverse(int input[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

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

    // Take array input from the user

    int n;
    cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    // Print array
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }

    // Largest element in the array

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }

    cout << "Max : " << max << endl;

    int a = 10;
    int b[10] = {1, 2, 3, 4, 5};
    reverse(b, 5);
    printArray(b, 5);

    /*
    increment(a, b, 10);

    cout << "a : " << a << endl;
    cout << "b[0] : " << b[0] << endl;
    */

    //	int input[100] = {1, 2, 3};

    /*
    // Take array input from the user
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }*/

    //	printArray(b, 100);

    return 0;
}
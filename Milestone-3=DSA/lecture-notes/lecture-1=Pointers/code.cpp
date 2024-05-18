#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 12;
    int* b = &a;

    cout << "Address of a: " << &a << endl;

    // pointers in arrays
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    cout << "Value at address pointed by ptr: " << *ptr << endl;

    // pointers in character arrays or strings

    char str[] = "Hello";
    char* ptr1 = str;
    cout << "Value at address pointed by ptr1: " << *ptr1 << endl;

    // pointer arithmetic
    cout << "Value at address pointed by ptr1: " << *ptr1 << endl;
    ptr1++;
    cout << "Value at address pointed by ptr1: " << *ptr1 << endl;
    // incrementing and decrementing
    ptr1++;
    cout << "Value at address pointed by ptr1: " << *ptr1 << endl;

    // double pointers
    int** c = &b;
    cout << "Value at address pointed by c: " << **c << endl;
    (*c)++;
    cout << "Value at address pointed by c: " << **c << endl;
    return 0;
}
#include <iostream>
using namespace std;

void increment1(int **p)
{
    p = p + 1;
}
void increment2(int **p)
{
    *p = *p + 1;
}
void increment3(int **p)
{
    **p = **p + 1;
}

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

    int i = 10;
    int *p = &i;
    cout << p << endl;
    // p = p+1 ;
    p = p + 2;
    cout << p << endl;
    p = p - 2;
    cout << p << endl;

    double d = 102.3;
    double *dp = &d;
    cout << dp << endl;
    dp++;
    cout << dp << endl;

    int a1[10];
    cout << a1 << endl;
    cout << &a1[0] << endl;
    a1[0] = 5;
    cout << *a1 << endl;
    cout << *(a1 + 1) << endl;
    int *p = &a1[0];
    cout << a1 << endl;
    cout << p << endl;

    cout << &p << endl;
    cout << &a1 << endl;

    cout << sizeof(p) << endl;
    cout << sizeof(a1) << endl;

    p = p + 1;
    // a1=a1+1; // not allowed

    // char str[] ="abcde";
    // char *pstr ="abcde";
    int a[] = {1, 2, 3};
    char b2[] = "abc";
    cout << a << endl;
    cout << b2 << endl;
    char *c = &b2[0];
    cout << c << endl;
    char c1 = 'a';
    char *pc = &c1;
    cout << c1 << endl;
    cout << pc << endl;

    int i = 10;
    int *p = &i;
    int **p2 = &p;
    cout << p2 << endl;
    cout << &p << endl;

    cout << p << endl;
    cout << *p2 << endl;
    cout << &i << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    return 0;
}
#include <iostream>
using namespace std;

int fib(int n)
{
    // function to return Nth number in fibonacci sequence

    // base case
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    return fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[])
{
    int n = 12;
    cout << "Nth number in fibonacci sequence is: " << fib(n) << endl;
    return 0;
}
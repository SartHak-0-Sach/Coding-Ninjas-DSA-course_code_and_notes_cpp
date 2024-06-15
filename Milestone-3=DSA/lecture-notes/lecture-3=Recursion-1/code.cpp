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

bool is_sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }
    bool isSmallerSorted = is_sorted(a + 1, size - 1);
    return isSmallerSorted;
    /*if (isSmallerSorted) {
        return true;
    } else {
        return false;
    }*/
}

bool is_sorted2(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    bool isSmallerOutput = is_sorted2(a + 1, size - 1);
    if (!isSmallerOutput)
    {
        return false;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        return true;
    }
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int smallOutput = factorial(n - 1);
    int output = n * smallOutput;
    return output;
}

int fib2(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    int smallOutput1 = fib(n - 1);
    int smallOutput2 = fib(n - 2);
    return smallOutput1 + smallOutput2;
}

int main(int argc, char const *argv[])
{
    int n = 12;
    cout << "Nth number in fibonacci sequence is: " << fib(n) << endl;
    cout << factorial(4) << endl;
    cout << fib2(3) << endl;
    return 0;
}
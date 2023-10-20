#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    getchar();
    return 0;
}
// Time Complexity: O(2^N)
// Auxiliary Space: O(N)
// Method 2 ( Use Dynamic Programming )
// We can avoid the repeated work done is the method 1 by storing the Fibonacci numbers calculated so far.
//
// // C++ program for Fibonacci Series using
// // Dynamic Programming
// #include <bits/stdc++.h>
// using namespace std;
//
// int fib(int n)
// {
//     /* Declare an array to store Fibonacci numbers. */
//     int f[n + 2]; // 1 extra to handle case, n = 0
//     int i;
//
//     /* 0th and 1st number of the series are 0 and 1*/
//     f[0] = 0;
//     f[1] = 1;
//
//     for (i = 2; i <= n; i++)
//     {
//         /* Add the previous 2 numbers in the series
//         and store it */
//         f[i] = f[i - 1] + f[i - 2];
//     }
//
//     return f[n];
// }
//
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fib(n);
//     getchar();
//     return 0;
// }
// Time Complexity: O(N)
// Extra Space: O(N)
// Method 3 ( Space Optimized Method 2 )
// We can optimize the space used in method 2 by storing the previous two numbers only because that is all we need to get the next Fibonacci number in series.
//
// // C++ program for Fibonacci Series using
// // Optimized Method
// #include <bits/stdc++.h>
// using namespace std;
//
// int fib(int n)
// {
//     int a = 0, b = 1, c, i;
//     if (n == 0)
//         return a;
//     for (i = 2; i <= n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }
//
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fib(n);
//     getchar();
//     return 0;
// }
// Time Complexity: O(N)
// Extra Space: O(1)
// Method 4 ( Using power of the matrix {{1,1},{1,0}} )
// This another O(n) which relies on the fact that if we n times multiply the matrix M = {{1,1},{1,0}} to itself (in other words calculate power(M, n )), then we get the (n+1)th Fibonacci number as the element at row and column (0, 0) in the resultant matrix.
// In this method, we use a recursive approach to calculate the Fibonacci number. We first initialize an array with two rows and two columns
// and then we pass this array as a parameter to a function which calculates the power of the matrix. The function calculates the power of the matrix
// by dividing the power n by 2 and calling itself recursively to calculate the power of the matrix. The function then multiplies the matrix to itself
// and returns the resultant matrix. The main function then prints the value at the first row and first column of the resultant matrix.
// The time complexity of this method is O(logn) and the space complexity is O(logn) as the function is called recursively.
// The space complexity can be reduced to O(1) by using an iterative approach instead of a recursive one.
// The following is the implementation of this approach:
//
// // C++ code to find Nth Fibonacci number in O(log N) time and O(1) space
// // C++ program to find n'th Fibonacci Number
// #include <bits/stdc++.h>
// using namespace std;
//
// void multiply(int F[2][2], int M[2][2]);
//
// void power(int F[2][2], int n);
//
// /* function that returns nth Fibonacci number */
// int fib(int n)
// {
//     int F[2][2] = {{1, 1}, {1, 0}};
//     if (n == 0)
//         return 0;
//     power(F, n - 1);
//
//     return F[0][0];
// }
//
// /* Optimized version of power() in method 4 */
// void power(int F[2][2], int n)
// {
//     if (n == 0 || n == 1)
//         return;
//     int M[2][2] = {{1, 1}, {1, 0}};
//
//     power(F, n / 2);
//     multiply(F, F);
//
//     if (n % 2 != 0)
//         multiply(F, M);
// }
//
// void multiply(int F[2][2], int M[2][2])
// {
//     int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
//     int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
//     int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
//     int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];
//
//     F[0][0] = x;
//     F[0][1] = y;
//     F[1][0] = z;
//     F[1][1] = w;
// }
//
// /* Driver code */
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fib(n);
//     getchar();
//     return 0;
// }
// Time Complexity: O(Logn)
// Extra Space: O(Logn) if we consider the function call stack size, otherwise O(1).
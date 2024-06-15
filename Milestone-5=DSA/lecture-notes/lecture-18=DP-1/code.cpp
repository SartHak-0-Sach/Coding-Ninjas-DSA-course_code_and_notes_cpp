// #include <iostream>
// using namespace std;

// int fibo(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     int a = fibo(n - 1);
//     int b = fibo(n - 2);
//     return a + b;
// }

// int fibo_helper(int n, int *ans)
// {
//     if (n <= 1)
//     {
//         return n;
//     }

//     // Check if output already exists
//     if (ans[n] != -1)
//     {
//         return ans[n];
//     }

//     // Calculate output
//     int a = fibo_helper(n - 1, ans);
//     int b = fibo_helper(n - 2, ans);

//     // Save the output for future use
//     ans[n] = a + b;

//     // Return the final output
//     return ans[n];
// }

// int fibo_2(int n)
// {
//     int *ans = new int[n + 1];

//     for (int i = 0; i <= n; i++)
//     {
//         ans[i] = -1;
//     }

//     return fibo_helper(n, ans);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << fibo_2(n) << endl;
// }




// #include <iostream>
// using namespace std;

// int fibo_3(int n)
// {
//     int *ans = new int[n + 1];

//     ans[0] = 0;
//     ans[1] = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         ans[i] = ans[i - 1] + ans[i - 2];
//     }

//     return ans[n];
// }

// int fibo(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     int a = fibo(n - 1);
//     int b = fibo(n - 2);
//     return a + b;
// }

// int fibo_helper(int n, int *ans)
// {
//     if (n <= 1)
//     {
//         return n;
//     }

//     // Check if output already exists
//     if (ans[n] != -1)
//     {
//         return ans[n];
//     }

//     // Calculate output
//     int a = fibo_helper(n - 1, ans);
//     int b = fibo_helper(n - 2, ans);

//     // Save the output for future use
//     ans[n] = a + b;

//     // Return the final output
//     return ans[n];
// }

// int fibo_2(int n)
// {
//     int *ans = new int[n + 1];

//     for (int i = 0; i <= n; i++)
//     {
//         ans[i] = -1;
//     }

//     return fibo_helper(n, ans);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << fibo_2(n) << endl;
// }




// #include <iostream>
// using namespace std;

// int minSteps(int n)
// {
//     // Base case
//     if (n <= 1)
//     {
//         return 0;
//     }

//     // Recursive call
//     int x = minSteps(n - 1);

//     int y = INT_MAX, z = INT_MAX;
//     if (n % 2 == 0)
//     {
//         y = minSteps(n / 2);
//     }

//     if (n % 3 == 0)
//     {
//         z = minSteps(n / 3);
//     }

//     // Calculate final output
//     int ans = min(x, min(y, z)) + 1;

//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     cout << minSteps(n) << endl;
// }




// #include <iostream>
// using namespace std;

// int minStepsHelper(int n, int *ans)
// {
//     // Base case
//     if (n <= 1)
//     {
//         return 0;
//     }

//     // Check if output already exists
//     if (ans[n] != -1)
//     {
//         return ans[n];
//     }

//     // Calculate output
//     int x = minStepsHelper(n - 1, ans);

//     int y = INT_MAX, z = INT_MAX;
//     if (n % 2 == 0)
//     {
//         y = minStepsHelper(n / 2, ans);
//     }

//     if (n % 3 == 0)
//     {
//         z = minStepsHelper(n / 3, ans);
//     }

//     int output = min(x, min(y, z)) + 1;

//     // Save output for future use
//     ans[n] = output;

//     return output;
// }

// int misSteps_2(int n)
// {
//     int *ans = new int[n + 1];

//     for (int i = 0; i <= n; i++)
//     {
//         ans[i] = -1;
//     }

//     return minStepsHelper(n, ans);
// }

// int minSteps(int n)
// {
//     // Base case
//     if (n <= 1)
//     {
//         return 0;
//     }

//     // Recursive call
//     int x = minSteps(n - 1);

//     int y = INT_MAX, z = INT_MAX;
//     if (n % 2 == 0)
//     {
//         y = minSteps(n / 2);
//     }

//     if (n % 3 == 0)
//     {
//         z = minSteps(n / 3);
//     }

//     // Calculate final output
//     int ans = min(x, min(y, z)) + 1;

//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     cout << minSteps(n) << endl;
// }




#include <iostream>
using namespace std;
#include <cmath>

// h >= 0
int balancedBTs(int h)
{
    if (h <= 1)
    {
        return 1;
    }

    int mod = (int)(pow(10, 9)) + 7;
    int x = balancedBTs(h - 1);
    int y = balancedBTs(h - 2);

    int temp1 = (int)(((long)(x)*x) % mod);
    int temp2 = (int)((2 * (long)(x)*y) % mod);
    int ans = (temp1 + temp2) % mod;

    // int ans = (x*x + 2*x*y) % mod;
    return ans;
}

int main()
{
    int h;
    cin >> h;
    cout << balancedBTs(h) << endl;
}

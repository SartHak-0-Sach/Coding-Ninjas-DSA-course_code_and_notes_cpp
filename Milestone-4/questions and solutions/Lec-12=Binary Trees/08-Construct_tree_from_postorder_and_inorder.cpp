// #include <iostream>
// #include <vector>
// using namespace std;

// void recursive(int n, vector<int> &ans)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     ans.push_back(n);
//     recursive(n - 1, ans);
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> ans(n);
//     recursive(n, ans);
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << endl;
//     }
//     return 0;
// }

/*
    Time Complexity: O( n )
    Space Complexity: O( n )

    where n is the integer.
*/

#include <iostream>
#include <vector>
using namespace std;

void recursiveFunction(int x, vector<int> &ans)
{
    if (x == 0)
    {
        return;
    }

    // Call recursive function
    recursiveFunction(x - 1, ans);

    // Insert element in the array
    ans.push_back(x);
}

vector<int> printNos(int x)
{
    // Declaring empty integer array
    vector<int> ans;

    // Calling recursive function
    recursiveFunction(x, ans);

    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> ans = printNos(n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}

/*
    Time Complexity: O( n )
    Space Complexity: O( 1 )

    where n is the integer.
*/

// space optimised code

// void recursiveFunction(int x, vector<int>& ans, int n) {
//     // Insert element in the array
//     ans.push_back(x);

//     if(x == n) {
//         return;
//     }

//     // Call recursive function
//     return recursiveFunction(x + 1, ans, n);

// }

// vector<int> printNos(int x) {
//     // Declaring empty integer array
//     vector<int> ans;

//     // Calling recursive function
//     recursiveFunction(1, ans , x);

//     return ans;
// }
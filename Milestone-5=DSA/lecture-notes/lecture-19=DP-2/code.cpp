// #include <iostream> 
// #include <vector>
// #include <climits>
// #include <algorithm>
// using namespace std;

// int minCostPath(int **input, int m, int n, int i, int j)
// {
//     // Base case
//     if (i == m - 1 && j == n - 1)
//     {
//         return input[i][j];
//     }

//     if (i >= m || j >= n)
//     {
//         return INT_MAX;
//     }

//     // Recursive calls
//     int x = minCostPath(input, m, n, i, j + 1);
//     int y = minCostPath(input, m, n, i + 1, j + 1);
//     int z = minCostPath(input, m, n, i + 1, j);

//     // Small Calculation
//     int ans = min(x, min(y, z)) + input[i][j];
//     return ans;
// }

// int minCostPath(int **input, int m, int n)
// {
//     return minCostPath(input, m, n, 0, 0);
// }

// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int **input = new int *[m];
//     for (int i = 0; i < m; i++)
//     {
//         input[i] = new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             cin >> input[i][j];
//         }
//     }
//     cout << minCostPath(input, m, n) << endl;
// }




// #include <iostream>
// using namespace std;
// #include <climits>

// int minCostPath_Mem(int **input, int m, int n, int i, int j, int **output)
// {
//     if (i == m - 1 && j == n - 1)
//     {
//         return input[i][j];
//     }

//     if (i >= m || j >= n)
//     {
//         return INT_MAX;
//     }

//     // Check if ans already exists
//     if (output[i][j] != -1)
//     {
//         return output[i][j];
//     }

//     // Recursive calls
//     int x = minCostPath_Mem(input, m, n, i, j + 1, output);
//     int y = minCostPath_Mem(input, m, n, i + 1, j + 1, output);
//     int z = minCostPath_Mem(input, m, n, i + 1, j, output);

//     // Small Calculation
//     int a = min(x, min(y, z)) + input[i][j];

//     // Save the answer for future use
//     output[i][j] = a;

//     return a;
// }

// int minCostPath_Mem(int **input, int m, int n, int i, int j)
// {
//     int **output = new int *[m];
//     for (int i = 0; i < m; i++)
//     {
//         output[i] = new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             output[i][j] = -1;
//         }
//     }

//     return minCostPath_Mem(input, m, n, i, j, output);
// }

// int minCostPath(int **input, int m, int n, int i, int j)
// {
//     // Base case
//     if (i == m - 1 && j == n - 1)
//     {
//         return input[i][j];
//     }

//     if (i >= m || j >= n)
//     {
//         return INT_MAX;
//     }

//     // Recursive calls
//     int x = minCostPath(input, m, n, i, j + 1);
//     int y = minCostPath(input, m, n, i + 1, j + 1);
//     int z = minCostPath(input, m, n, i + 1, j);

//     // Small Calculation
//     int ans = min(x, min(y, z)) + input[i][j];
//     return ans;
// }

// int minCostPath(int **input, int m, int n)
// {
//     return minCostPath(input, m, n, 0, 0);
// }

// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int **input = new int *[m];
//     for (int i = 0; i < m; i++)
//     {
//         input[i] = new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             cin >> input[i][j];
//         }
//     }
//     cout << minCostPath_Mem(input, m, n, 0, 0) << endl;
//     cout << minCostPath(input, m, n) << endl;
// }




// #include <iostream>
// using namespace std;
// #include <climits>

// int minCOst_DP(int **input, int m, int n)
// {
//     int **ans = new int *[m];
//     for (int i = 0; i < m; i++)
//     {
//         ans[i] = new int[n];
//     }

//     ans[m - 1][n - 1] = input[m - 1][n - 1];

//     // Last row
//     for (int j = n - 2; j >= 0; j--)
//     {
//         ans[m - 1][j] = input[m - 1][j] + ans[m - 1][j + 1];
//     }

//     // Last col
//     for (int i = m - 2; i >= 0; i--)
//     {
//         ans[i][n - 1] = input[i][n - 1] + ans[i + 1][n - 1];
//     }

//     for (int i = m - 2; i >= 0; i--)
//     {
//         for (int j = n - 2; j >= 0; j--)
//         {
//             ans[i][j] = input[i][j] + min(ans[i][j + 1], min(ans[i + 1][j + 1], ans[i + 1][j]));
//         }
//     }
//     return ans[0][0];
// }

// int minCostPath_Better(int **input, int m, int n, int i, int j, int **ans)
// {
//     if (i == m - 1 && j == n - 1)
//     {
//         return input[i][j];
//     }

//     if (i >= m || j >= n)
//     {
//         return INT_MAX;
//     }

//     if (ans[i][j] != -1)
//     {
//         return ans[i][j];
//     }

//     int x = minCostPath_Better(input, m, n, i + 1, j, ans);
//     if (x < INT_MAX)
//     {
//         ans[i + 1][j] = x;
//     }
//     int y = minCostPath_Better(input, m, n, i + 1, j + 1, ans);
//     if (y < INT_MAX)
//     {
//         ans[i + 1][j + 1] = y;
//     }
//     int z = minCostPath_Better(input, m, n, i, j + 1, ans);
//     if (z < INT_MAX)
//     {
//         ans[i][j + 1] = z;
//     }

//     ans[i][j] = min(x, min(y, z)) + input[i][j];
//     return ans[i][j];
// }

// int minCostPath_Better(int **input, int m, int n)
// {
//     int **ans = new int *[m];
//     for (int i = 0; i < m; i++)
//     {
//         ans[i] = new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             ans[i][j] = -1;
//         }
//     }
//     return minCostPath_Better(input, m, n, 0, 0, ans);
// }

// int minCostPath(int **input, int m, int n, int i, int j)
// {
//     // Base case
//     if (i == m - 1 && j == n - 1)
//     {
//         return input[i][j];
//     }

//     if (i >= m || j >= n)
//     {
//         return INT_MAX;
//     }

//     // Recursive calls
//     int x = minCostPath(input, m, n, i, j + 1);
//     int y = minCostPath(input, m, n, i + 1, j + 1);
//     int z = minCostPath(input, m, n, i + 1, j);

//     // Small Calculation
//     int ans = min(x, min(y, z)) + input[i][j];
//     return ans;
// }

// int minCostPath(int **input, int m, int n)
// {
//     return minCostPath(input, m, n, 0, 0);
// }

// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int **input = new int *[m];
//     for (int i = 0; i < m; i++)
//     {
//         input[i] = new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             cin >> input[i][j];
//         }
//     }
//     cout << minCOst_DP(input, m, n) << endl;
//     cout << minCostPath_Better(input, m, n) << endl;
//     cout << minCostPath(input, m, n) << endl;
// }




// #include <iostream>
// using namespace std;

// int lcs(string s, string t)
// {
//     // Base case
//     if (s.size() == 0 || t.size() == 0)
//     {
//         return 0;
//     }

//     // Recursive calls
//     if (s[0] == t[0])
//     {
//         return 1 + lcs(s.substr(1), t.substr(1));
//     }
//     else
//     {

//         int a = lcs(s.substr(1), t);
//         int b = lcs(s, t.substr(1));
//         int c = lcs(s.substr(1), t.substr(1));
//         return max(a, max(b, c));
//     }
// }

// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     cout << lcs(s, t) << endl;
// }




// #include <iostream>
// using namespace std;

// int lcs_mem(string s, string t, int **output)
// {
//     int m = s.size();
//     int n = t.size();

//     // Base case
//     if (s.size() == 0 || t.size() == 0)
//     {
//         return 0;
//     }

//     // Check if ans already exists
//     if (output[m][n] != -1)
//     {
//         return output[m][n];
//     }

//     int ans;
//     // Recursive calls
//     if (s[0] == t[0])
//     {
//         ans = 1 + lcs_mem(s.substr(1), t.substr(1), output);
//     }
//     else
//     {
//         int a = lcs_mem(s.substr(1), t, output);
//         int b = lcs_mem(s, t.substr(1), output);
//         int c = lcs_mem(s.substr(1), t.substr(1), output);
//         ans = max(a, max(b, c));
//     }

//     // Save your calculation
//     output[m][n] = ans;

//     // Return ans
//     return ans;
// }

// int lcs_mem(string s, string t)
// {
//     int m = s.size();
//     int n = t.size();
//     int **output = new int *[m + 1];
//     for (int i = 0; i <= m; i++)
//     {
//         output[i] = new int[n + 1];
//         for (int j = 0; j <= n; j++)
//         {
//             output[i][j] = -1;
//         }
//     }

//     return lcs_mem(s, t, output);
// }

// int lcs(string s, string t)
// {
//     // Base case
//     if (s.size() == 0 || t.size() == 0)
//     {
//         return 0;
//     }

//     // Recursive calls
//     if (s[0] == t[0])
//     {
//         return 1 + lcs(s.substr(1), t.substr(1));
//     }
//     else
//     {

//         int a = lcs(s.substr(1), t);
//         int b = lcs(s, t.substr(1));
//         int c = lcs(s.substr(1), t.substr(1));
//         return max(a, max(b, c));
//     }
// }

// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     cout << lcs_mem(s, t) << endl;
//     cout << lcs(s, t) << endl;
// }





// #include <iostream>
// using namespace std;

// int lcs_DP(string s, string t)
// {
//     int m = s.size();
//     int n = t.size();
//     int **output = new int *[m + 1];

//     for (int i = 0; i <= m; i++)
//     {
//         output[i] = new int[n + 1];
//     }

//     // Fill 1st row
//     for (int j = 0; j <= n; j++)
//     {
//         output[0][j] = 0;
//     }

//     // Fill 1st col
//     for (int i = 1; i <= m; i++)
//     {
//         output[i][0] = 0;
//     }

//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             // Check if 1st char matches
//             if (s[m - i] == t[n - j])
//             {
//                 output[i][j] = 1 + output[i - 1][j - 1];
//             }
//             else
//             {
//                 int a = output[i - 1][j];
//                 int b = output[i][j - 1];
//                 int c = output[i - 1][j - 1];
//                 output[i][j] = max(a, max(b, c));
//             }
//         }
//     }

//     return output[m][n];
// }

// int lcs_mem(string s, string t, int **output)
// {
//     int m = s.size();
//     int n = t.size();

//     // Base case
//     if (s.size() == 0 || t.size() == 0)
//     {
//         return 0;
//     }

//     // Check if ans already exists
//     if (output[m][n] != -1)
//     {
//         return output[m][n];
//     }

//     int ans;
//     // Recursive calls
//     if (s[0] == t[0])
//     {
//         ans = 1 + lcs_mem(s.substr(1), t.substr(1), output);
//     }
//     else
//     {
//         int a = lcs_mem(s.substr(1), t, output);
//         int b = lcs_mem(s, t.substr(1), output);
//         int c = lcs_mem(s.substr(1), t.substr(1), output);
//         ans = max(a, max(b, c));
//     }

//     // Save your calculation
//     output[m][n] = ans;

//     // Return ans
//     return ans;
// }

// int lcs_mem(string s, string t)
// {
//     int m = s.size();
//     int n = t.size();
//     int **output = new int *[m + 1];
//     for (int i = 0; i <= m; i++)
//     {
//         output[i] = new int[n + 1];
//         for (int j = 0; j <= n; j++)
//         {
//             output[i][j] = -1;
//         }
//     }

//     return lcs_mem(s, t, output);
// }

// int lcs(string s, string t)
// {
//     // Base case
//     if (s.size() == 0 || t.size() == 0)
//     {
//         return 0;
//     }

//     // Recursive calls
//     if (s[0] == t[0])
//     {
//         return 1 + lcs(s.substr(1), t.substr(1));
//     }
//     else
//     {

//         int a = lcs(s.substr(1), t);
//         int b = lcs(s, t.substr(1));
//         int c = lcs(s.substr(1), t.substr(1));
//         return max(a, max(b, c));
//     }
// }

// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     cout << lcs_DP(s, t) << endl;
//     cout << lcs_mem(s, t) << endl;
//     cout << lcs(s, t) << endl;
// }




// #include <iostream>
// using namespace std;

// int editDistance(string s, string t)
// {
//     // Base case
//     if (s.size() == 0 || t.size() == 0)
//     {
//         return max(s.size(), t.size());
//     }

//     if (s[0] == t[0])
//     {
//         return editDistance(s.substr(1), t.substr(1));
//     }
//     else
//     {
//         // Insert
//         int x = editDistance(s.substr(1), t) + 1;
//         // Delete
//         int y = editDistance(s, t.substr(1)) + 1;
//         // Replace
//         int z = editDistance(s.substr(1), t.substr(1)) + 1;

//         return min(x, min(y, z));
//     }
// }

// int main()
// {
//     string s = "abcdf";
//     string t = "afd";

//     cout << editDistance(s, t) << endl;
// }




// #include <iostream>
// using namespace std;

// int editDistance_mem(string s, string t, int **output)
// {
//     int m = s.size();
//     int n = t.size();

//     if (s.size() == 0 || t.size() == 0)
//     {
//         return max(s.size(), t.size());
//     }

//     // Check if ans already exists
//     if (output[m][n] != -1)
//     {
//         return output[m][n];
//     }

//     int ans;
//     if (s[0] == t[0])
//     {
//         ans = editDistance_mem(s.substr(1), t.substr(1), output);
//     }
//     else
//     {
//         // Insert
//         int x = editDistance_mem(s.substr(1), t, output) + 1;
//         // Delete
//         int y = editDistance_mem(s, t.substr(1), output) + 1;
//         // Replace
//         int z = editDistance_mem(s.substr(1), t.substr(1), output) + 1;

//         ans = min(x, min(y, z));
//     }

//     // Save the ans
//     output[m][n] = ans;

//     // Return the ans
//     return ans;
// }

// int editDistance_mem(string s, string t)
// {
//     int m = s.size();
//     int n = t.size();
//     int **ans = new int *[m + 1];
//     for (int i = 0; i <= m; i++)
//     {
//         ans[i] = new int[n + 1];
//         for (int j = 0; j <= n; j++)
//         {
//             ans[i][j] = -1;
//         }
//     }
//     return editDistance_mem(s, t, ans);
// }

// int editDistance(string s, string t)
// {
//     // Base case
//     if (s.size() == 0 || t.size() == 0)
//     {
//         return max(s.size(), t.size());
//     }

//     if (s[0] == t[0])
//     {
//         return editDistance(s.substr(1), t.substr(1));
//     }
//     else
//     {
//         // Insert
//         int x = editDistance(s.substr(1), t) + 1;
//         // Delete
//         int y = editDistance(s, t.substr(1)) + 1;
//         // Replace
//         int z = editDistance(s.substr(1), t.substr(1)) + 1;

//         return min(x, min(y, z));
//     }
// }

// int main()
// {
//     string s = "abcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdf";
//     string t = "afdiafdafdafdafd";

//     cout << editDistance_mem(s, t) << endl;
//     cout << editDistance(s, t) << endl;
// }




// #include <iostream>
// using namespace std;

// int editDistance_DP(string s, string t)
// {
//     int m = s.size();
//     int n = t.size();
//     int **output = new int *[m + 1];
//     for (int i = 0; i <= m; i++)
//     {
//         output[i] = new int[n + 1];
//     }

//     // Fill 1st row
//     for (int j = 0; j <= n; j++)
//     {
//         output[0][j] = j;
//     }

//     // Fill 1st col
//     for (int i = 1; i <= m; i++)
//     {
//         output[i][0] = i;
//     }

//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (s[m - i] == t[n - j])
//             {
//                 output[i][j] = output[i - 1][j - 1];
//             }
//             else
//             {
//                 int a = output[i - 1][j];
//                 int b = output[i][j - 1];
//                 int c = output[i - 1][j - 1];
//                 output[i][j] = min(a, min(b, c)) + 1;
//             }
//         }
//     }

//     return output[m][n];
// }

// int editDistance_mem(string s, string t, int **output)
// {
//     int m = s.size();
//     int n = t.size();

//     if (s.size() == 0 || t.size() == 0)
//     {
//         return max(s.size(), t.size());
//     }

//     // Check if ans already exists
//     if (output[m][n] != -1)
//     {
//         return output[m][n];
//     }

//     int ans;
//     if (s[0] == t[0])
//     {
//         ans = editDistance_mem(s.substr(1), t.substr(1), output);
//     }
//     else
//     {
//         // Insert
//         int x = editDistance_mem(s.substr(1), t, output) + 1;
//         // Delete
//         int y = editDistance_mem(s, t.substr(1), output) + 1;
//         // Replace
//         int z = editDistance_mem(s.substr(1), t.substr(1), output) + 1;

//         ans = min(x, min(y, z));
//     }

//     // Save the ans
//     output[m][n] = ans;

//     // Return the ans
//     return ans;
// }

// int editDistance_mem(string s, string t)
// {
//     int m = s.size();
//     int n = t.size();
//     int **ans = new int *[m + 1];
//     for (int i = 0; i <= m; i++)
//     {
//         ans[i] = new int[n + 1];
//         for (int j = 0; j <= n; j++)
//         {
//             ans[i][j] = -1;
//         }
//     }
//     return editDistance_mem(s, t, ans);
// }

// int editDistance(string s, string t)
// {
//     // Base case
//     if (s.size() == 0 || t.size() == 0)
//     {
//         return max(s.size(), t.size());
//     }

//     if (s[0] == t[0])
//     {
//         return editDistance(s.substr(1), t.substr(1));
//     }
//     else
//     {
//         // Insert
//         int x = editDistance(s.substr(1), t) + 1;
//         // Delete
//         int y = editDistance(s, t.substr(1)) + 1;
//         // Replace
//         int z = editDistance(s.substr(1), t.substr(1)) + 1;

//         return min(x, min(y, z));
//     }
// }

// int main()
// {
//     string s = "abcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdfabcdf";
//     string t = "afdiafdafdafdafd";

//     cout << editDistance_DP(s, t) << endl;
//     cout << editDistance_mem(s, t) << endl;
//     cout << editDistance(s, t) << endl;
// }

#include <iostream>
using namespace std;

int knapsack(int *weight, int *values, int n, int maxWeight)
{
    // Base case
    if (n == 0 || maxWeight == 0)
    {
        return 0;
    }

    if (weight[0] > maxWeight)
    {
        return knapsack(weight + 1, values + 1, n - 1, maxWeight);
    }

    // Recursive calls
    int x = knapsack(weight + 1, values + 1, n - 1, maxWeight - weight[0]) + values[0];
    int y = knapsack(weight + 1, values + 1, n - 1, maxWeight);

    return max(x, y);
}

int main()
{
    int n;
    int weights[] = {5, 1, 8, 9, 2};
    int values[] = {4, 10, 2, 3, 1};
    int W = 15;
    cout << knapsack(weights, values, 5, W) << endl;
}

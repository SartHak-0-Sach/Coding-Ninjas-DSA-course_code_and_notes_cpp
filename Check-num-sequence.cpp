#include <bits/stdc++.h>
using namespace std;

bool canMake(int n, int ar[])
{
    if (n == 1)
        return true;
    else
    {
        if (ar[0] < ar[1])
        {

            int i = 1;
            while (i < n && ar[i - 1] < ar[i])
            {
                i++;
            }
            while (i + 1 < n && ar[i] > ar[i + 1])
            {
                i++;
            }
            if (i >= n - 1)
                return true;
            else
                return false;
        }
        else if (ar[0] > ar[1])
        {
            int i = 1;
            while (i < n && ar[i - 1] > ar[i])
            {
                i++;
            }
            while (i + 1 < n && ar[i] < ar[i + 1])
            {
                i++;
            }
            if (i >= n - 1)
                return true;
            else
                return false;
        }
        else
        {
            for (int i = 2; i < n; i++)
            {
                if (ar[i - 1] <= ar[i])
                    return false;
            }
            return true;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m = sizeof arr / sizeof arr[0];

    if (canMake(m, arr))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// function check whether a number is prime or not
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

// Function to print primes
void printPrime(int n)
{
    for (int i = 2; i <= n; i++)
        if (isPrime(i))
            cout << i << endl;
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    printPrime(n);
}

// sieve of erathonesis code for finding all primes from 1 to N
// #include <bits/stdc++.h>
// using namespace std;
// const int MAX_SIZE=1e6+5;
// vector<int>isprime(MAX_SIZE,true);
// vector<int>prime;
// vector<int>SPF(MAX_SIZE);
// void manipulated_seive(int N)
// {
//     isprime[0]=isprime[1]=false;
//     for(int i=2;i<N;i++)
//     {
//         if(isprime[i])
//         {
//             prime.push_back(i);
//             SPF[i]=i;
//         }
//         for(int j=0;j<prime.size()&&i*prime[j]<N&&prime[j]<=SPF[i];j++)
//         {
//             isprime[i*prime[j]]=false;
//             SPF[i*prime[j]]=prime[j];
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     manipulated_seive(n);
//     for(int i=0;i<prime.size()&&prime[i]<=n;i++)
//     {
//         cout<<prime[i]<<" ";
//     }
//     return 0;
// }
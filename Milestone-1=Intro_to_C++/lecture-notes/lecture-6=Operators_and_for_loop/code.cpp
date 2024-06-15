#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // for loops
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            cout << ">" << endl; // operators
        }
        else if (a < b)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }

    int ror = 15 | 30;
    int rand = 15 & 30;
    int rnot = ~15;
    int rxor = 15 ^ 30;
    int rls = 15 << 2;
    int rrs = 15 >> 2;

    cout << ror << endl;
    cout << rand << endl;
    cout << rnot << endl;
    cout << rxor << endl;
    cout << rls << endl;
    cout << rrs << endl;

    char c;
    c = cin.get();
    int count = 0;
    while (c != '$')
    {
        count++;
        c = cin.get();
    }
    cout << count << endl;

    return 0;
}
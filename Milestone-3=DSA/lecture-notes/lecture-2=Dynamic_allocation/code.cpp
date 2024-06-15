#include <iostream>
using namespace std;

void increment(int &i)
{
    i++;
}

// bad practice
int &f(int n)
{
    int a = n;
    return a;
}

// bad practice
int *f2()
{
    int i = 10;
    return &i;
}

int main(int argc, char const *argv[])
{
    // dynamically allocating memory to array and performing arithmatic operations on it
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    int i = 65;
    char c = i;
    cout << c << endl;

    int *p = &i;
    char *pc = (char *)p;

    cout << p << endl;
    cout << pc << endl;

    cout << *p << endl;
    cout << *pc << endl;
    cout << *(pc + 1) << endl;
    cout << *(pc + 2) << endl;
    cout << *(pc + 3) << endl;

    int *p = f2();

    int i;
    i = 10;

    int &k1 = f(i);

    increment(i);
    cout << i << endl;

    int &j = i;

    i++;
    cout << j << endl;
    j++;
    cout << i << endl;

    int k = 100;
    j = k;
    cout << i << endl;

    int m, n;
    cin >> m >> n;
    int **p2 = new int *[m];
    for (int i = 0; i < m; i++)
    {
        p2[i] = new int[i + 1];
        for (int j = 0; j < n; j++)
        {
            cin >> p2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        delete[] p2[i];
    }
    delete[] p2;
    return 0;
}
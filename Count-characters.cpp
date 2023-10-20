#include <iostream>
using namespace std;

int main()
{
    int lower = 0, number = 0, special = 0;
    char c[100];
    cin.get(c, 100);
    for (int i = 0; i < 100; i++)
    {

        if (c[i] >= 'a' && c[i] <= 'z')
        {
            lower++;
        }
        else if (c[i] >= '0' && c[i] <= '9')
        {
            number++;
        }
        else if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n')
        {
            special++;
        }
        else if (c[i] == '$')
        {
            break;
        }
    }
    cout << lower << " " << number << " " << special;
    return 0;
}
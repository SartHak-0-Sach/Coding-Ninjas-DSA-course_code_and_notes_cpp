#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  char i;
  cin >> i;
  if (i >= 'A' && i <= 'Z')
    cout << 1 << endl;
  else if (i >= 'a' && i <= 'z')
    cout << 0 << endl;
  else
    cout << -1 << endl;
  return 0;
}
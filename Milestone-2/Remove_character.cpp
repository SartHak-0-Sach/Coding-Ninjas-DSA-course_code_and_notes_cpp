#include <iostream>
using namespace std;

void removeAllOccurrencesOfChar(string input, char c)
{
  string ans = "";
  for (int i = 0; i < input.size(); i++)
  {
    if (input[i] != c)
    {
      ans = ans + input[i];
    }
  }
  cout << ans << endl;
}

int main(int argc, char const *argv[])
{
  char c;
  cin >> c;
  string input;
  cin >> input;
  removeAllOccurrencesOfChar(input, c);
  return 0;
}

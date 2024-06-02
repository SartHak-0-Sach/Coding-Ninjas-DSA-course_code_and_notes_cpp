#include <iostream>
using namespace std;

void removeX(char s[]) {
	if (s[0] == '\0') {
		return;
	}

	if (s[0] != 'x') {
		removeX(s + 1);
	} else {
		int i = 1;
		for (; s[i] != '\0'; i++) {
			s[i - 1] = s[i];
		}
		s[i - 1] = s[i];
		removeX(s);
	}
}

int length(char s[]) {
	if (s[0] == '\0') {
		return 0;
	}
	int smallStringLength = length(s + 1);
	return 1 + smallStringLength;
}

int subs(string input, string output[])
{
    if (input.empty())
    {
        output[0] = "";
        return 1;
    }

    string smallString = input.substr(1);
    int smallOutputSize = subs(smallString, output);
    for (int i = 0; i < smallOutputSize; i++)
    {
        output[i + smallOutputSize] = input[0] + output[i];
    }
    return 2 * smallOutputSize;
}

int main()
{
    char str[100];
    cin >> str;

    int l = length(str);
    cout << l << endl;
    removeX(str);
    cout << str << endl;
    l = length(str);
    cout << l << endl;

    string input;
    cin >> input;
    string *output = new string[1000];
    int count = subs(input, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }
}

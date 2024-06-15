// #include <iostream>
// using namespace std;

// void removeX(char s[])
// {
//     if (s[0] == '\0')
//     {
//         return;
//     }

//     if (s[0] != 'x')
//     {
//         removeX(s + 1);
//     }
//     else
//     {
//         int i = 1;
//         for (; s[i] != '\0'; i++)
//         {
//             s[i - 1] = s[i];
//         }
//         s[i - 1] = s[i];
//         removeX(s);
//     }
// }

// int length(char s[])
// {
//     if (s[0] == '\0')
//     {
//         return 0;
//     }
//     int smallStringLength = length(s + 1);
//     return 1 + smallStringLength;
// }

// int main()
// {
//     char str[100];
//     cin >> str;

//     int l = length(str);
//     cout << l << endl;
//     removeX(str);
//     cout << str << endl;
//     l = length(str);
//     cout << l << endl;
// }

#include <iostream>
using namespace std;

int main()
{

    string *sp = new string;
    *sp = "def";
    cout << sp << endl;
    cout << *sp << endl;

    string s = "abc";
    // getline(cin, s);
    cout << s << endl;

    s = "defdef";
    cout << s[0] << endl;
    s[0] = 'a';
    string s1;
    s1 = "def";

    string s2 = s + s1;
    cout << s2 << endl;

    s += s1;

    cout << s1 << endl;
    cout << s << endl;

    cout << s.size() << endl;
    cout << s.substr(3) << endl;
    cout << s.substr(3, 3) << endl;

    cout << s.find("def") << endl;
}

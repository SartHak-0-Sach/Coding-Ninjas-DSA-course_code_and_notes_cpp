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

// #include <iostream>
// using namespace std;

// int main()
// {

//     string *sp = new string;
//     *sp = "def";
//     cout << sp << endl;
//     cout << *sp << endl;

//     string s = "abc";
//     // getline(cin, s);
//     cout << s << endl;

//     s = "defdef";
//     cout << s[0] << endl;
//     s[0] = 'a';
//     string s1;
//     s1 = "def";

//     string s2 = s + s1;
//     cout << s2 << endl;

//     s += s1;

//     cout << s1 << endl;
//     cout << s << endl;

//     cout << s.size() << endl;
//     cout << s.substr(3) << endl;
//     cout << s.substr(3, 3) << endl;

//     cout << s.find("def") << endl;
// }

// #include <iostream>
// using namespace std;

// int subs(string input, string output[])
// {
//     if (input.empty())
//     {
//         output[0] = "";
//         return 1;
//     }

//     string smallString = input.substr(1);
//     int smallOutputSize = subs(smallString, output);
//     for (int i = 0; i < smallOutputSize; i++)
//     {
//         output[i + smallOutputSize] = input[0] + output[i];
//     }
//     return 2 * smallOutputSize;
// }

// int main()
// {
//     string input;
//     cin >> input;
//     string *output = new string[1000];
//     int count = subs(input, output);
//     for (int i = 0; i < count; i++)
//     {
//         cout << output[i] << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// void print_subs(string input, string output)
// {
//     if (input.length() == 0)
//     {
//         cout << output << endl;
//         return;
//     }

//     print_subs(input.substr(1), output);
//     print_subs(input.substr(1), output + input[0]);
// }

// int main()
// {
//     string input;
//     cin >> input;
//     string output = "";
//     print_subs(input, output);
// }


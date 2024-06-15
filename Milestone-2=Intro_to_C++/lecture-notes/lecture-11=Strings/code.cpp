#include <iostream>
#include <string>
#include <algorithm>
#include <cstring> // header files related to strings
using namespace std;

int last(string a)
{
    if (a.size() == 0)
        return 0;

    return a.back() - '0';
}

void remove(string &a)
{
    if (a.size() > 0)
        a.pop_back();
}

int main(int argc, char const *argv[])
{
    string name;
    // char name[20];

    cin >> name;

    cout << name;
    cout << name.size();

    // string L1,L2;

    // getline(cin,L1);
    // getline(cin,L2);

    // cout<<L1<endl<<L2;

    string name;
    int age;

    cin >> age;

    cin.ignore(1);
    getline(cin, name);

    cout << name << " " << age;

    string a, b;

    if (a < b)
        cout << "a < b";
    else
        cout << "a > b";

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string word;
    cin >> word;
    cout << word.at(4);

    // for(int i=0; i<word.size(); i++){
    //    cout<<word[i]<<" ";
    // }

    // for(char ele : word){
    //    cout<<ele<<" ";
    // }

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string st;
    cin >> st;
    int L = 0;
    int R = st.size() - 1;
    bool flag = true;
    while (L <= R)
    {
        if (st[L] != st[R])
        {
            flag = false;
            break;
        }
        L++, R--;
    }
    if (flag == true)
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string a = "abc";
    string b = "012345";
    string c = "helloToWorld";

    // character addition

    // a.push_back('$');
    // b.insert(3, a);

    // cout<<b;

    // character renoval
    // a.pop_back();

    // c.erase(5, 2);

    // cout<<c;

    // concatenation & append
    a.append("def");
    cout << a << " , " << b;

    string word;
    cin >> word;

    //[0,5] = > range 0,4
    //(L,R)
    reverse(word.begin() + 1, word.begin() + 4);

    cout << word;

    string word;
    cin >> word;

    // word-
    // begin -> 'w'
    // end -> '-'
    //(L,R) => [L,R)
    // begin -> 0
    //(1 , 3) => (1 , 2)
    sort(word.begin() + 1, word.begin() + 3 + 1);

    cout << word;

    string text = "hellell";
    string pat = "lle";

    // cin>>text;

    if (text.find(pat) == string::npos)
    {
        cout << "No Match";
    }
    else
    {
        cout << "Match found at index " << text.find(pat);
    }

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string a, b;
    cin >> a >> b;

    int carry = 0;
    string res = "";

    int a_length = a.size();
    int b_length = b.size();
    int max_length = max(a_length, b_length);

    // Padding shorter string with leading zeros
    while (a.size() < max_length)
        a.insert(a.begin(), '0');
    while (b.size() < max_length)
        b.insert(b.begin(), '0');

    for (int i = max_length - 1; i >= 0; i--)
    {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        int d = sum % 2;
        carry = sum / 2;
        res.push_back('0' + d);
    }

    if (carry > 0)
    {
        res.push_back('1');
    }

    reverse(res.begin(), res.end());

    cout << res << endl;

    string a;
    a = "Hi there!";
    cout << a << endl;
    string b = " Welcome to my world!!";

    string c = a + b; // easiest way of combining two strings

    // Caution- '+' is the only arithmatic operator eligible for use in strings

    cout << "Length of string c is:- " << c.length() << endl;

    string d = a.append(b); // another way of combining two strings

    if (c == d)
        cout << "Both strings are equal." << endl;

    string word;
    cin >> word;

    // word-
    // begin -> 'w'
    // end -> '-'
    //(L,R) => [L,R)
    // begin -> 0
    //(1 , 3) => (1 , 2)
    sort(word.begin() + 1, word.begin() + 3 + 1);

    cout << word;

    string text = "hellell";
    string pat = "lle";

    // cin>>text;

    if (text.find(pat) == string::npos)
    {
        cout << "No Match";
    }
    else
    {
        cout << "Match found at index " << text.find(pat);
    }

    return 0;
}
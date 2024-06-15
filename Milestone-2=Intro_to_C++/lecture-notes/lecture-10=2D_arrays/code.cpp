#include <iostream>
using namespace std;

void printArray(int a[][5], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void printAllPrefixes(char input[])
{
    // i represents end index of my prefix
    for (int i = 0; input[i] != '\0'; i++)
    {
        // j represents start index of my prefix
        for (int j = 0; j <= i; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}

void printArray(int a[][5], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void printAllPrefixes(char input[])
{
    // i represents end index of my prefix
    for (int i = 0; input[i] != '\0'; i++)
    {
        // j represents start index of my prefix
        for (int j = 0; j <= i; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }

    char input1[100] = "abcd";
    printAllPrefixes(input1);

    /*
    char input2[100] = "xy";

    cout << "Before copying : ";
    cout << "Input 1 : " << input1 << endl;
    cout << "Input 2 : " << input2 << endl;
    //strcpy(input1, "hello");

    strncpy(input1, input2, 4);

    cout << "After copying : ";
    cout << "Input 1 : " << input1 << endl;
    cout << "Input 2 : " << input2 << endl;
    */

    // cin >> input1;
    // cin >> input2;

    /*
    if(strcmp(input1, input2) == 0) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    */

    /*
    int len = strlen(input);
    cout << "Length : " << len << endl;
    */

    int a[100][100];
    int m, n;
    cin >> m >> n;

    // Taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // print array row wise
    cout << "Row wise : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Column wise : " << endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int arr2[5][5] = {{1, 2}, {3, 4}};
    printArray(arr2, 5, 5);

    /*
    int a[100][100];
    int m, n;
    cin >> m >> n;


    // Taking input
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    printArray(a, m, n);
    */
    /*
    // print array row wise
    cout << "Row wise : " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0;  j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Column wise : " << endl;
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    */
}

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char input[])
{
    int len = length(input);
    int i = 0, j = len - 1;
    while (i < j)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

int main(int argc, char const *argv[])
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // represents the way of implementing a 2-d array with 3 rows and 4 columns
    // int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; // another way of implementing a 2-d array with 3 rows and 4 columns
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // way of printing a 2-d array using 2 nested loops

    char name[100];
    cout << "Enter your name : ";
    cin >> name;
    /*
    name[4] = 'x';
    name[3] = 'd';
    name[1] = '\0';
    */
    cout << "Name : " << name << endl;

    cout << "Length : " << length(name) << endl;

    char input[100];
    // cin >> input;
    cin.getline(input, 100);

    reverseString(input);
    cout << input << endl;

    char input1[100] = "abcd";
    printAllPrefixes(input1);

    /*
    char input2[100] = "xy";

    cout << "Before copying : ";
    cout << "Input 1 : " << input1 << endl;
    cout << "Input 2 : " << input2 << endl;
    //strcpy(input1, "hello");

    strncpy(input1, input2, 4);

    cout << "After copying : ";
    cout << "Input 1 : " << input1 << endl;
    cout << "Input 2 : " << input2 << endl;
    */

    // cin >> input1;
    // cin >> input2;

    /*
    if(strcmp(input1, input2) == 0) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    */

    /*
    int len = strlen(input);
    cout << "Length : " << len << endl;
    */

    int a2[100][100];
    int m, n;
    cin >> m >> n;

    // Taking input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a2[i][j];
        }
    }

    // print array row wise
    cout << "Row wise : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Column wise : " << endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a2[i][j] << " ";
        }
        cout << endl;
    }

    int a[5][5] = {{1, 2}, {3, 4}};
    printArray(a, 5, 5);

    /*
    int a[100][100];
    int m, n;
    cin >> m >> n;


    // Taking input
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    printArray(a, m, n);
    */
    /*
    // print array row wise
    cout << "Row wise : " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0;  j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Column wise : " << endl;
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    */
    return 0;
}
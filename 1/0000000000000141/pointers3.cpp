#include<iostream>
using namespace std;

int main(){
    int i;
    cout << i << endl;

    i++;
    cout << i << endl;

    int* p = 0;
    cout << p << endl;

    cout<< *p << endl;
    (*p)++;
    cout << *p << endl;
}
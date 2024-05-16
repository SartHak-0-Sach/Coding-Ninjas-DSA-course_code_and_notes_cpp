#include <iostream>
using namespace std;

int addNum(int a, int b) {return a + b;}

int main() {
    int x = 5;
    int y = 10;
    cout << addNum(x, y) << endl;
    return 0;
}
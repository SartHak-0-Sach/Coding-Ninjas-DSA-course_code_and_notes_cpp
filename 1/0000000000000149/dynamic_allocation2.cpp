#include <iostream>
using namespace std;

int main() {

	int *p = new int;
	delete p;

	p = new int;
	delete p;

	p = new int[100];
	delete [] p;

	/*
	while (true) {
		int *p = new int;
	}
	
	while (true) {
		int i = 10;
	}
*/

}


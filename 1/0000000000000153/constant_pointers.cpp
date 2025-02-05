#include <iostream>
using namespace std;

int main() {
	int i = 10;
	int j = 21;
	int const * p = &i;

	p = &j;

	int * const p2 = &i;
	(*p2)++;
	//p2 = &j;


	int const * const p3 = &i;
	p3 = &j;
	(*p3)++;
}


#include <iostream>
using namespace std;

union Integer {
	struct Word{
		short lowword;
		short highword;
	};
	Word word;
	int i;
};

int main() {
	Integer u;
	u.i = 0x1234ABCD; 
	cout << hex << u.word.highword << endl;
	cout << hex << u.word.lowword << endl;

	Integer v;
	v.word.highword = 0x1234;
	v.word.lowword = 0x5678;

	cout << hex << v.i << endl;
	// 0x45122222
}

/*
- In union, data members shares the space amongst themselves.
- The data member having highest size determines the size of the union.
*/
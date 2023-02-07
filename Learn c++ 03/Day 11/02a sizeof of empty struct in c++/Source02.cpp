#include<iostream>
using namespace std;
struct Dummy {};

int main() {
	Dummy dummy;
	cout << sizeof(Dummy) << endl;
	cout << sizeof(dummy) << endl;

}

/*
- Can C program have empty structure?
	No. Atleast one member must be present in the C struct.

- Can C++ program have empty structure?
	Yes. The size of empty struct is 1 byte.

- Note this byte cannot be accessed.
- It is there to indicate presense of an object.
*/

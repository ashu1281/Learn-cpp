#include <iostream>
using namespace std;

void print(int value);

int main() {
	int a[] = { 1, 2, 3, 4, 5, 6, 7 };
	const size_t len = sizeof(a) / sizeof(int);
	for (size_t i = 0; i < len; i++)
		print(a[i]);
}

void print(int value) {
	cout << value << endl;
}

/*
* sizeof looks like a function but its an operator. is equal to all bytes required for array it means of if array contains 3 integer elements the sizeof it is 12.
* To sizeof type or a variable can be passed as an argument.
* sizeof returns size_t and size_t is a typedef of unsigned int.
*/
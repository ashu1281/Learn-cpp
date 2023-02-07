#define C 3

void main() {
	int a[] = { 1, 2, 3 };
	int b[][C] = { { 1, 2, 3 },{ 4, 5, 6 } };
	int c[][C] = { 1, 2, 3, 4, 5, 6, 7 };
}

/*
* C++ can use initializers to fix dimension of an array.
* For double dimension array, column dimension is mandatory. 
* for multi dimension array, exclude 1st deimension, all dimensions are mandatory.
* Compiler can figure out row dimension based upon the number of initializers.
*/

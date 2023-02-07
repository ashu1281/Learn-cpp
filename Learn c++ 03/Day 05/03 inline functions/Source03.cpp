#include "add.h"

int main() {
	int result = 0;
	result = 3 + 5; // inline
	result = add(1, 2); // not inline
}

/*
* If function is inline then its declaration and definition must be stored in a header file.
	Not keeping inline function defintion in header file results in linking error.

* If function is non-inline then only declaration must be stored in a header file.
	Definition must be stored in a separate implementation file.
	Keeping inline function defintion in header file results in linking error.
*/
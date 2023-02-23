#include "Header.h"
#include <iostream>

int factorial(int n) {
	if (n < 0)
		throw 101;

	if (n <= 1)
		return n;
	return n * factorial(n - 1);
}
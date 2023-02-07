#include"b.h"

int fibonacci(int n) {

	if (n <= 1) {
		return n;
	}
	//int previous = 0, current = 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
	

}
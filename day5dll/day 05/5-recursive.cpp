#include "b.h"
int sum(int n) {
	int s = 0;
	if (n > 0) {
		s = n % 10;
		n = n / 10;
		return s + sum(n);
	}

	return s;
}
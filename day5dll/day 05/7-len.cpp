#include "b.h"
int len(int n) {
	int i = 0;
	if (n > 0) {
		n /= 10;
		i=1;
		return i + len(n);
	}
	return i;
}
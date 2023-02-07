#include <iostream>
#include "8.h"
using namespace std;

int large(int* p, int* q) {
	if (*p > *q)
		return *p;
	else
		return *q;

}



void print(int* parr, int* size) {
	for (int i = 0; i < *size; i++) {
		cout << "element - " << i << " :" << parr[i] << endl;
	}

}

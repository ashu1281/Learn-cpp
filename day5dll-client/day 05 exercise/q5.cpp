#include<iostream>
using namespace std;
#include <assert.h>
#include "b.h"
int main() {
	int a = 123;
	int result = sum(a);
	assert(result == 6);
	cout<< "Sum of digits of "<<a<<" is "<< sum(a);



}

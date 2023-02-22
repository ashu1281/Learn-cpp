#include <assert.h>
#include "Integer.h"

int main() {
	Integer a(1);//Do step into here and check which constructor getting called.
	Integer b = a;//Do step into here and check which constructor getting called.
	assert(a.Get() == b.Get());
	
}

/*
- Copy constructor always exist in the class.

- Compiler supplied copy constructor do byte by byte copy.

- Constructor is called for every object one and only one time.
*/

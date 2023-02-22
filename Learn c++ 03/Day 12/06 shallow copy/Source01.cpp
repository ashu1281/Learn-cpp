#include <assert.h>
#include "Integer.h"

int main() {
	Integer a = 5;
	Integer b = a;
	assert(a.Get() == b.Get());

}

//if you have not write own copy constructor then compiler provide default constructor, so one of the object becomes dangling pointer

// this is known as shallow copy
#include <stdio.h>

extern "C" int add(int u, int v);


int main() {
	int a = 1, b = 2, c = 0;
	c = add(a, b);
	printf("%d\n", c);
}

/*
extern "C" stops the cpp style name mangling and function overloading

and do name mangling in c style

- in c style name mangling "_" will be add before the function name.
*/
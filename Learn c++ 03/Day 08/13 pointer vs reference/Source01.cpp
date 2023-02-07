#include <stdio.h>

void f(int *p) {

}

void g(int &r) {

}

void k(int&& r) {

}

int main() {
	f(nullptr);
	g(nullptr);
	k(nullptr);
}

/* 
- Reference cannot be set to null. Pointer can be set null.
- If null could be one of the possible values of a parameter then
  the parameter is to be implemented as pointer.
*/
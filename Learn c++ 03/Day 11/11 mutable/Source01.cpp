#include "Circle.h"

int main() {
	Circle a = 5;
	double area = 0.0;

	area = a.GetArea();
	area = a.GetArea();

	a.SetRadius(-10);
	area = a.GetArea();
	area = a.GetArea();
}

/*
- The keyword mutable is mainly used to allow a particular data member of const object to be modified
  within const member function.
*/
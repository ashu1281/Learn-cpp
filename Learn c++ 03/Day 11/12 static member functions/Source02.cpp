#include <iostream>

class Calc {
public:
	static int Add(int u, int v);//static keyword only required in declaration there is no need to write in definition.

};
int Calc::Add(int u, int v) {
	return u + v;
}

int main() {
	Calc calc;
	int result = calc.Add(1, 2);
	result = Calc::Add(3, 4);
}

/*
- A static member function can called without using object.
*/


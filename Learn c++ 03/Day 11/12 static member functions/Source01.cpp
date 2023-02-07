#include <iostream>

class Calc {
public:
	int Add(int u, int v);
	
};
int Calc::Add(int u, int v) {
	return u + v;
}

int main() {
	Calc calc;
	int result = calc.Add(1, 2);
	result = Calc::Add(3, 4);//Error: a call of a non-static member function requires an object

/*
- A non-static member function can only be called using an object of the class.
- When to declare member function as static?
  When implmentation of member function doesn't depends upon data members (state variables).
*/
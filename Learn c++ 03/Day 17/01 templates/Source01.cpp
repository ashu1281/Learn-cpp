#include <iostream>
using namespace std;

int IntCompare(int u, int v) { return (u < v ? -1 : (u > v ? 1 : 0)); }

class IntComparer {
public:
	int operator()(int u, int v) { return (u < v ? -1 : (u > v ? 1 : 0)); }
};

int DblCompare(double u, double v) { return (u < v ? -1 : (u > v ? 1 : 0)); }

class DblComparer {
public:
	int operator()(double u, double v) { return (u < v ? -1 : (u > v ? 1 : 0)); }
	//int Fun(double u, double v) { return (u < v ? -1 : (u > v ? 1 : 0)); } //this line for my understanding.
};


int main() {
	int a = 5, b = 2, result = 0;
	result = IntCompare(a, b);

	IntComparer intComparer;
	a = 6, b = 8;
	result = intComparer(a, b);// intComparer.operator()(a,b)
	

	double i = 1.0, j = 2.0;
	result = DblCompare(i, j);

	DblComparer dblComparer;
	i = 3.0, j = 1.2;
	result = dblComparer(i, j);// Comparer.operator()(a,b)
	//result = dblComparer.Fun(i, j); // this line for my understanding.

	return 0;
}
#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print(Circle* pobj) {//member function
		cout << pobj->m_radius << endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print(&a);//Print is a member function that's why we use 'a.'

	Circle b = { 10 };
	b.Print(&b);
}

/*
- When a function is made member function, C++ introduces 'this' pointer within the function.

- - The 'this' pointer present in member functions.
	It is not present in global fuctions.

*/
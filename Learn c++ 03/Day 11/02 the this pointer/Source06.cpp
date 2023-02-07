#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print() {
		cout << m_radius << endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print();

	Circle b = { 10 };
	b.Print();
}

/*
- Note the 'this' pointer is implicity added by C++ compiler.
	hence we can omit mentioning it explicity.

- Specification of 'this' pointer within member function is optional.
  Hence it is eliminated in above code.

-From C++ compiler point of view 'cout <<m_radius << endl;' statement is equivalent to 'cout << this->m_radius<< endl;' statement.

- Object space contains only data members.
- Member functions are stored in code segment.
*/
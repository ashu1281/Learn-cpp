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

	cout << sizeof(Circle) << endl;
	cout << sizeof(a) << endl;

}

/*
- Object space contains only data members. i.e. it doesn't contain member function definitions.
	Hence the size of Circle is 4 bytes.
- Member functions are stored in code segment.
*/
#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

class Circle {
private:
	int m_radius;
public:
	Circle() {//default constructor
		m_radius = 1;
	}

	Circle(int radius) {//parameter constructor // constructor overloading happening here.
		SetRadius(radius);
	}
public:
	int GetRadius() {
		assert(m_radius > 0);
		return m_radius;
	}

	void SetRadius(int radius) {
		if (radius <= 0)
			throw invalid_argument("Radius must be positive number.");
		m_radius = radius;
	}
public:
	void Print() {
		cout << GetRadius() << endl;
	}
};

int main() {
	Circle a; // Invokes default constructor
	a.Print();

	Circle b(5); // Invokes parametric constructor
	b.Print();

	Circle c = 10; // Invokes parametric constructor, if it is single parametric 
}

/*
Constructor overloading (function overloading of constructor) is allowed.
*/
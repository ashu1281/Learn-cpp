#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

struct Circle {
	int m_radius;

	/* accessor(or reader) or getter */
	int GetRadius() {
		assert(m_radius > 0);//if data source is originating to the obj, if test cases are powerfull then use assert
		//assert effect only present in debug configuration not in release.
		return m_radius;
	}

	/* mutator(or modifier) or setter */
	void SetRadius(int radius) {
		if (radius <= 0)//if data source is external then use if //if effect is present in both configurations.
			throw invalid_argument("Radius must be positive number.");
		m_radius = radius;
	}

	void Print() {
		cout << GetRadius() << endl;
	}
};

int main() {
	Circle a = { 5 };
	int r = a.GetRadius();
	a.Print();
	a.SetRadius(10);
	a.Print();

	a.m_radius = -5;// it directly worked so you can assign -ve value by using this simply so this is not good.
	a.SetRadius(-5);
}
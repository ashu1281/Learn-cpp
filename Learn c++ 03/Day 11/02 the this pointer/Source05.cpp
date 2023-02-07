#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print() {// no need to write Circle* pobj in fun it equal to this and which is automatically add by compiler   - Note the 'this' pointer is implicity added by C++ compiler. hence we can omit mentioning it explicity.
		cout << this->m_radius << endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print();

	Circle b = { 10 };
	b.Print();
}

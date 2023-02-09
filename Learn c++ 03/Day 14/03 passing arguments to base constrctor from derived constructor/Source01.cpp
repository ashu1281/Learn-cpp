#include <iostream>
using namespace std;

class Base {
public:
	Base(int i) : m_i(i) {
		cout << "From Base Constructor" << endl;
	}
	~Base() {
		cout << "From Base Destructor" << endl;
	}
private:
	int m_i;
};

class Derived : public Base {
public:
	Derived(int i, int j) : Base(i), m_j(j) {
		cout << "From Derived Constructor" << endl;
	}
	~Derived() {
		cout << "From Derived Destructor" << endl;
	}
private:
	int m_j;
};

int main() {
	Derived d(1, 5);
}

/*
- Please note private data members of the base class are inherited in
  derived class. They are however not accessible in derived class.
*/
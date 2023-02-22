#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "From Base Default Constructor" << endl;
	}

	Base(const Base& obj) {
		cout << "From Base Copy Constructor" << endl;
	}

	~Base() {
		cout << "From Base Destructor" << endl;
	}

	Base& operator=(const Base& obj) {
		if (this != &obj) { // checking for self assignment
			// memberwise assignment
		}
		return *this;
	}
};

class Derived : public Base {
public:
	Derived() {
		cout << "From Derived Default Constructor" << endl;
	}

	Derived(const Derived& obj) : Base(obj)/*this is must*/ {
		cout << "From Derived Copy Constructor" << endl;
	}

	~Derived() {
		cout << "From Derived Destructor" << endl;
	}

	Derived& operator=(const Derived& obj) {
		if (this != &obj) {
			Base::operator=(obj);// this is must
			// derived memberwise assignment
		}
		return *this;
	}
};

int main() {
	Derived u; // invokes Derived default constructor of Derived class
	Derived v = u; // invokes Derived copy constructor of Derived class
	v = u; // invokes Derived copy assignment operator of Derived class
}


/*
- While implementing copy constructor and copy assignment operator 
  in derived class, ensure that call is made to the copy constructor and
  copy assignment operator of the base class resp.
*/

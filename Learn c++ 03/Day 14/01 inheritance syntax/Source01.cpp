#include <iostream>
using namespace std;

// Base class can also be called as
// Parent or Super or General
class Base {
public:
	void Print() {
		cout << "From Base::Print" << endl;
	}
};

// Derived class can also be called as
// Child or Sub or Special
class Derived : public Base {

};

int main() {
	Derived d;
	
	d.Print();
}

// Inheritance is also known as 'is-a' relationship or  general-special relationship.
//
// Composition/aggregation is also known as 'has-a' relationship or whole-part relationship

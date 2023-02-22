#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "From Base Constructor" << endl; // order 1
	}//ye vale Aplog me derived ke construtor ka call rahta hai
	~Base() {
		cout << "From Base Destructor" << endl; // 4
	}
};

class Derived : public Base {
public:
	Derived() {// ye vale prolog me base ke construtor ko call rahta hai isliye fir control waha jata hai.
		cout << "From Derived Constructor" << endl; // 2
	}
	~Derived() {
		cout << "From Derived Destructor" << endl; // 3
	}// is Aplog me base ke destructor ka call rahta hai.
};

int main() {//it contains 'prolog' code
	Derived d;
}//it contain 'Aplog' code // yaha derived ke destructor ka call rahta hai
 

/*
This program illustrates order of calling constructor and destructor that
happens between Base and Derived class.

When instantiated object of Derived i.e. 'd', we observed it was constructor
of 'Base' class that got executed first and then the constructor of 'Derived'.

//The destructor order is always reverse of constructor order.

So at the end of the program, the destructor of 'Derived' was executed first
and then the destructor of 'Base' clas

eg. of file accesing in derived class which is from base class.
*/
class Base {
public:
	
	virtual ~Base() {}
};

class Derived : public Base {};

class Derived2 : public Base {};

int main() {
	Derived derived;

	Base* pbase = &derived;//Upcasting happens implicitly.

	Derived* pderived = nullptr;
	
	//pderived = pbase; // Down casting cannot happen implicitly.

	pderived = dynamic_cast<Derived*>(pbase); // This expression should work //if yoy used dynamic casting then you must have one virtual function in class. (but we use mostly virtual destructor function in class; except any dummy fucntion)

	Derived2 derived2;

	pbase = &derived2;

	pderived = dynamic_cast<Derived*>(pbase); // his expression shouldn't work
}

/*
- Assigning base class pointer to derived class pointer is called as downcasting.
- Explicit casting is essential to perform downcasting.
- Use dynamic_cast operator to do downcasting.
- The base class must be polymorphic (should have presence of virtual function) for dynamic_cast to work.
- Adding virtual destructor to the base class would make base class polymorphic.


- Always use dynamic_cast in Down casting.
	
*/

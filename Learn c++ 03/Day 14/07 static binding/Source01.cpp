class Base {
public:
	void f() {

	}
};

class Derived : public Base {
public:
	void f() {

	}
};

int main() {
	Base base;
	Derived derived;

	Base* pbase = nullptr;
	Derived* pderived = nullptr;

	pbase = &base;
	pbase->f(); // here Base::f() called  

	

	pderived = &derived;
	pderived->f(); // Derived::f()

	pbase = &derived;
	pbase->f(); // Base::f(); ==> is called  // not Derived::f()  ==> it not called

	//what type of pointer the function of that type/class is called.
	// abobe pbase it has Base type then her f() is called by base of f() // Base::f()
	//ther is no matter pabse pointing to derived obeject.
	// its type is base the base function is called thats it.
}
class Dummy {
public:
	void f() {}
	static void g() {}
public:
	void h() {
		f();
		g();
	}
	static void k() {
		/*f();*/
		g();
	}
};

int main() {
	Dummy dummy;
	dummy.h();
	Dummy::k();

}

/*
- A non-static member function can access both static and non-static members(data member / member function both).

- A static member function can access only static member.
*/
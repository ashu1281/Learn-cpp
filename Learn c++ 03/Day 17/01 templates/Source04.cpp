template<class U, class T, class V>
class A {
public:
	void f() {

	}
};

template<class U, class V>
class A<U, int, V> {
public:
	void f() {

	}
};

template<class U>
class A<U, int, double> {
public:
	void f() {

	}
};

template<>
class A<char, int, double> {
public:
	void f() {

	}
};

int main() {
	A<float, float, char> a;
	a.f(); // 1st

	A<float, int, char> b;
	b.f(); //2nd

	A<float, int, double> c;
	c.f(); // 3rd

	A<char, int, double> d;
	d.f(); // 4th

	return 0;
}
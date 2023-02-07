class Dummy {
public:
	void F();
	void F() const;
};

void Dummy::F() {}

void Dummy::F() const {}

int main() {
	Dummy u;
	u.F();//step into here to check which 'F' fucntion is called const or non-const.

	const Dummy v;
	v.F();//step into here to check which 'F' fucntion is called const or non-const.
}

/*
- Function overloading is possible between const and non-const non-static member functions.
*/
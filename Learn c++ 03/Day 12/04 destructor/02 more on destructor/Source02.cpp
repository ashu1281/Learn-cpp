class Dummy {
public:
	~Dummy();
	~Dummy(int n);
};

Dummy::~Dummy() {}

Dummy::~Dummy(int n) {}

int main() {
	Dummy obj;
}

/*
- Parameterized destructor is not allowed hence
  destructor overloading is not possible.

  -but it is possible in constructor bz parameterized constructor is allowed.
*/

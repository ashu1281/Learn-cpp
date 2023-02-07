class Dummy {
public:
	void F() const;
	static void G() const;//static member functions cannot be constant function
};

void Dummy::F() const {}

void Dummy::G() {}

void Mess() const {}//global fuction can not be constant function

int main() const {} // global fuction can not be constant function



/*
- Global and static member functions cannot be constant functions,
  since they lack presense of 'this' pointer.
- Only non-static member functions can be constant functions.
*/

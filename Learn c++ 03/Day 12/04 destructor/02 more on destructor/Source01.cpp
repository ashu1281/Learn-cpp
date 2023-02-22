class Dummy {
public:
	~Dummy();
};

Dummy::~Dummy() {}
class Dummy {
public:
	Dummy();
	~Dummy();
};

Dummy::~Dummy() {}

int main() {
	Dummy u;
	u.Dummy(); //Explicit call to constructor is an error
	u.~Dummy();//Explict call to destructor is ok.
}


/*
- Explicit call to a destructor is possible.
- Note constructor cannot be called explicitly.
////- Usually we donot call destructor explicitly.
*/
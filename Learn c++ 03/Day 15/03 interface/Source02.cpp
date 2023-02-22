class IClonnable {
public:
	virtual void Clone() = 0; // pure virtual function
};

class ISerializable {
public:
	virtual void Serialize() = 0;
};

class Dervied : public IClonnable, public ISerializable {
public:
	void Clone() override {}
	void Serialize() override {}
};

int main() {
	//IClonnable clonnable;
	Dervied derived;
	derived.Clone();
	derived.Serialize();

	IClonnable* pclonnable = &derived;
	pclonnable->Clone();

	ISerializable* pserializable = &derived;
	pserializable->Serialize();

}

/*
- An interface is an abstract class which contains public pure virtual functions
  and optionally virtual destructor.
- Thus every interface is an abstract class, however every abstract class is not an interface.
- Abstract class have must virtual function but it can have also other non virtual functions also.

- In Microsoft programming, interface name is prefixed with letter 'I'.
- In CAA programming, interface name is prefixed with 'CATI'.
*/
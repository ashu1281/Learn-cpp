class Integer {
public:
	Integer(int i);
private:
	int m_i;
};

Integer::Integer(int i) : m_i(i) {//this is known as initialization list.// this is true initialization.
}

int main() {
	Integer u(5);
}


/*
- Initialization list can be used to initialize non-static data members only.
- Attempting to initialize static data member in initialization results in compilation error.
- To initialization data members, between initialization list and the body of a constructor, 
always prefer initialization list.
*/
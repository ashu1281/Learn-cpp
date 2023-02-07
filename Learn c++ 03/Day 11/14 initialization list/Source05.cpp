#include<cstdlib>

class Integer {

public:
	Integer(int i);
public:
	void SetI(int i);
private:
	int m_i;
};

Integer::Integer(int i) : m_i(rand()) {}

void Integer::SetI(int i) {
	m_i = i;
}
int main() {
	Integer u(5);
}

/*
-A call to function is possible in initialization expression in initialization list.
- The function should return a value which can be used to initialize the data member.
*/
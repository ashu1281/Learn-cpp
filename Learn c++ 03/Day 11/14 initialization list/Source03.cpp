class Integer {

public:
	Integer(int i);
public:
	void SetI(int i);
private:
	int m_i;
};

Integer::Integer(int i) : m_i(i) {}

void Integer::SetI(int i) : m_i(i) {}// Error: Initialization list cannot be used with setter or any other function except constructor.

int main() {
	Integer u(5);
}

/*
- Initialization list can be used only with "constructor", not with any other functions.
*/

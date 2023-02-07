class Integer {
public:
	Integer(int i);
private:
	int m_i;
};

Integer::Integer(int i) {
	m_i = i; //body of constructor.//actually this is assignment.
}

int main() {
	Integer u(5);
}


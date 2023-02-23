class Integer {
public:
	Integer(int i) : m_i(i) {}
private:
	int m_i;
};

int main() {
	int n = 5;
	Integer u = n;

	n = 10;
	u = n;// u = Integer(n)


}


/*
- Single parametric constructor is also known as type conversion constructor.
*/

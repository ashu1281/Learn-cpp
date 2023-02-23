class Integer {
public:
	Integer(int i) : m_i(i) {}
private:
	int m_i;
};

class Double {
public:
	Double(double d) : m_d(d) {}
public:
	double GetValue() const { return m_d; }
public:
	explicit operator Integer() const { return Integer((int)m_d); }
private:
	double m_d;
};

int main() {
	Integer u = 5;
	Double v = 3.14;
	u = Integer(v); // u = (Integer)v -> u = v.operator Integer()
}
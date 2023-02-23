class Double;//is known as forward declaration.

class Integer {
public:
	Integer(int i) : m_i(i) {}
	Integer(const Double& d);
private:
	int m_i;
};

class Double {
public:
	Double(double d) : m_d(d) {}
private:
	double m_d;
	friend Integer;//friend class => it gives access of private datamember of Double to Integer class.
};

Integer::Integer(const Double& d) : m_i(static_cast<int>(d.GetValue())) {}

int main() {
	Integer u = 5;
	Double v = 3.14;
	u = v; // u = Integer(v) or u = (Integer)v -> u = v.operator Integer()
}
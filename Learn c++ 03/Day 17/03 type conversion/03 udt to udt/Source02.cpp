class Double;

class Integer {
public:
	Integer(int i) : m_i(i) {}
	explicit  Integer(const Double& d); // explicit tells us if data loss will happend
private:
	int m_i;
};

class Double {
public:
	Double(double d) : m_d(d) {}
public:
	double GetValue() const { return m_d; }// previous code we use friend class and use of friend is not good that's why we use getValue function here.
private:
	double m_d;
};

Integer::Integer(const Double& d) : m_i(static_cast<int>(d.GetValue())) {}

int main() {
	Integer u = 5;
	Double v = 3.14;
	u = static_cast<Integer>(v); // u = Integer(v) or u = (Integer)v -> u = v.operator Integer() //here we have to do type conversion other wise it gives error due to explicit casting.
}

/*
- if type conversion constructor is written without explicit keyword then the conversion happens implicitly.
- For explicit type conversion write 'explicit' keyword on the type conversion constructor.
*/
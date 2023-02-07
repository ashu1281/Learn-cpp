class Integer {

public:
	Integer(int i);
public:
	void SetI(int i);
private:
	int m_i;
};

Integer::Integer(int i) : SetI(i) {}

void Integer::SetI(int i){
	m_i = i;
}
int main() {
	Integer u(5);
}

/*
- A plain call to function without initialization expression is not possible 
	in initialization list.
*/

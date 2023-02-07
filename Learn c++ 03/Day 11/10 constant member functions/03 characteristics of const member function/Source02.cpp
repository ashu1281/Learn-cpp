int g_data;

class Dummy {
public:
	Dummy();
public:
	void F() const;
private:
	int m_data;
};

Dummy::Dummy() {
	m_data = 0;
}

void Dummy::F() const {
	int data = 0;
	data = 1;//local variables can be modified within const function.
	g_data = 1;//global variables can be modified within const function.
	m_data = 1;//data members cannot be modified within const function.
}

int main() {
	const Dummy dummy;
	dummy.F();
}

/*
- local variables can be modified within const function.
- global variables can be modified within const function.
- data members cannot be modified within const function.
*/

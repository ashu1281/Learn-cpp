void f(int& p);

void f(const int& q);

int main() {
	int a = 1;
	const int b = 2;
	f(a);
	f(b);

}

void f(int& p) {}

void f(const int& q) {}
/*
- const is also one of the difference for making funtion overloading

*/
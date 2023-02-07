int main() {
	int a = 1;
	const int b = 1;

	int &ra = a;// non-const reference can refer to non-const referent
	int &rb = b;// non-const reference cann't refer to const referent



	const int &cra = a;// const reference can refer to non-const referent
	cra = 15;// not possible
	a = 15;//possible

	const int& crb = b; // a const reference can refer to const referent
	crb = 10;// not possible
	b = 10;// not possible

}

/*
- non-const reference can refer to non-const referent only.
- const reference can refer to const as well as non-const referent.
*/
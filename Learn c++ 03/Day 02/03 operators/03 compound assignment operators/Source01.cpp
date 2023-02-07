void main() {
	int a = 7, b = 2;
	a += b; // a = a + (b) --> 9
	a -= b; // a = a - (b) --> 7
	a *= b; // a = a * (b) --> 14
	a /= b; // a = a / (b) --> 7
	a %= b; // a = a % (b) --> 1

	int c = 3;
	c *= a + b; // c = c * (a + b) --> 9
}
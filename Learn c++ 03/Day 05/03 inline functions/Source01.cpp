int add(int u, int v);

int main() {
	int result = 0;
	result = 3 + 5; // expression is inline. Attempt to step into this expression and check if control goes out of the main.
	result = add(1, 2); // add is not inline. Attempt to step into this expression and check if control goes out of the main.
}

int add(int u, int v) {
	return u + v;
}

void alloc(int* pn) {
	pn = new int;
}

int main() {
	int* pa = nullptr;
	alloc(pa);//null
	delete pa;
	pa = nullptr;
}

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	int n = 0, sum = 0, argc = 0;
	const char * argv[] = { "123", "45", "5678", "9","hello"};
	
	argc = sizeof(argv) / sizeof(char*);

	for (size_t i = 0; i < argc; i++) {
		n = atoi(argv[i]);// it return 0 for hello string
		sum += n;
	}

	cout << sum << endl;
}

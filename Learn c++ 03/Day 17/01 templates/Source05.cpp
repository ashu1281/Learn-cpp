#include <iostream>
using namespace std;

template<class T>
int Compare(T& u, T& v) { return (u < v ? -1 : (u > v ? 1 : 0)); }

template<>
int Compare(const char*& u, const char*& v) { return strcmp(u, v); }

template<class T>
class Comparer {
public:
	int operator()(T& u, T& v) { return (u < v ? -1 : (u > v ? 1 : 0)); }
};

template<>
class Comparer<const char*> {
public:
	int operator()(const char* u, const char* v) { return strcmp(u, v); }
};

int main() {
	int a = 5, b = 2, result = 0;

	const char* p = "Hello, World";
	const char* q = "C++ is fun";

	result = Compare(a, b);
	result = Compare(p, q);

	Comparer<int> intComparer;
	a = 5, b = 2;
	result = intComparer(a, b);

	Comparer<const char*> strComparer;
	result = strComparer(p, q);

	return 0;
}
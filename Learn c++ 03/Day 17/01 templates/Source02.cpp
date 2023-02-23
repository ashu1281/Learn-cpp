#include <iostream>
using namespace std;

template<class T> //function template
int Compare(T& u, T& v) { return (u < v ? -1 : (u > v ? 1 : 0)); }

template<class T>// class template
class Comparer {
public:
	int operator()(T& u, T& v); // declaration
};

template<class T>
int Comparer<T>::operator()(T& u, T& v) { return (u < v ? -1 : (u > v ? 1 : 0)); } //definition out side class.


int main() {
	int a = 5, b = 2, result = 0;
	result = Compare(a, b);

	Comparer<int> intComparer;
	a = 6, b = 6;
	result = intComparer(a, b);
	
	double i = 1.0, j = 2.0;
	result = Compare(a, b);

	Comparer<double> dblComparer;
	i = 3.0, j = 1.2;
	result = dblComparer(i, j);

	

	const char* s1 = "Hello, World";
	const char* s2 = "C++ is fun";

	result = Compare(s1, s2);
	result = strcmp(s1, s2);

	return 0;
}

/*
- IN privious program we have to wirte different functions for diff types like int , double , float , etc.
-	But we can stop this labour work by using template like above code.
	
-	In above "T" is not a type it work as a placeholder , it replaced by type like int , double ,etc.

-	In class template we have to declare type name at defining object like "<int>" infront of classname.
	but there is no need to define type name in function template case.



*/
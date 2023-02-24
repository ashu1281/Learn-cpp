
/*Create a template function to swap two variables of any data type.*/
#include <iostream>
using namespace std;

template<class T>
void Swap(T& var1, T& var2) {
	T temp = var1;
	var1 = var2;
	var2 = temp;

}

int main() {
	int a = 2, b = 3;
	Swap(a, b);
	cout <<"After Swapping : " << a << ", " << b << endl;

	double i = 1.2, j = 3.2;
	Swap(i, j);
	cout <<"After Swapping : " << i << ", " << j << endl;
}
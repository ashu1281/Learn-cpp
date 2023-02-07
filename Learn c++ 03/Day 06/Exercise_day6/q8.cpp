//Write a program to calculate the factorial of a given number using pointers.
//Sample Output :
//Input a number : 5
//The Factorial of 5 is : 120


#include<iostream>;
using namespace std;

int factorial(int n) {
	if (n <= 1)
		return n;
	return n * factorial(n - 1);
}

int main() {
	int n;
	cout << "Enter the number : ";
	cin >> n;

	int* ptr = &n;
	cout << "The factorial of " << n << " is : " << factorial(*ptr) << endl;

}

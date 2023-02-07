//Write a program to find the larger number out of two numbers using a pointer.
//Sample Output :
//Input the first number : 7
//Input the second number : 2
//7 is the larger number.
#include<iostream>
using namespace std;

int main() {
	int num1, num2, result = 0;
	int* ptr1, * ptr2;
	cout << "Enter the first number : ";
	cin >> num1;
	cout << "Enter the second numbern : ";
	cin >> num2;

	ptr1 = &num1;
	ptr2 = &num2;

	if (*ptr1 > *ptr2) {
		result = *ptr1;
	}
	else
		result = *ptr2;

	cout << result<< " is the larger number." << endl;
	

}
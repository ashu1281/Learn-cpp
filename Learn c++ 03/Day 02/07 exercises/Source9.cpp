//Write a program to calculate the sum of the firstand last digit of a number.
//Sample Input :
//Input any number : 12345
//
//Sample Output :
//The first digit of 12345 is : 1
//The last digit of 12345 is : 5
//The sum of first and last digit of 12345 is : 6

#include<iostream>
using namespace std;

int main() {
	int num = 0, sum = 0, first_digit = 0, last_digit = 0;
	cout << "Enter the number:";
	cin >> num;

	last_digit = num % 10;

	while (num >= 10) {
		num = num / 10;
	}
	first_digit = num;

	cout << "The sum of first and last digit of " << num << " is : " << first_digit + last_digit;
	return 0;
}
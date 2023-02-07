//Write a program to find the sum of digits of a given number.
//Sample Input :
//Input a number : 1234
//
//Sample Output :
//The sum of digits of 1234 is : 10


#include<iostream>
using namespace std;

int main() {
	int num = 0, sum = 0;
	cout << " enter the number:";
	cin >> num;

	int m = num;

	while (num > 0) {
		sum = sum + (num % 10);
		num = num / 10;
	}
	cout << "The sum of digits of " << m << " is: " << sum;
	return 0;
}
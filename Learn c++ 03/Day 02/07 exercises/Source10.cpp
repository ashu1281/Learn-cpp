//Write a program to print all factors of a given number.
//Sample Input :
//Input a number : 63
//
//Sample Output :
//The factors are : 1 3 7 9 21 63

#include<iostream>
using namespace std;

int main() {
	int num = 0, i = 1;
	
	cout << "Enter the number: ";
	cin >> num;
	cout << "The factors are : ";

	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			cout << i << " ";
		}
	}
	return 0;
}
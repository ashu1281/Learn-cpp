//Write a program to calculate the sum of first n natural integers. (Hint: use formula to calculate sum of first n natural numbers)
//Sample Input :
//Input n : 5
//Sum of first 5 natural numbers is : 15

#include<iostream>
using namespace std;

int main() {
	double n = 0, sum = 0;
	cout << "enter the size of n:";
	cin >> n;

	sum = (n * (n + 1)) / 2;

	cout << "sum of first" << n << "numbers is : " << sum << endl;

	return 0;



}
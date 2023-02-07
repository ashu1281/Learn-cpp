//Write a program to display the first n terms of Fibonacci series.
//Sample Input :
//Input number of terms to display : 10
//
//Sample Output :
//Here is the Fibonacci series upto to 10 terms :
//	0 1 1 2 3 5 8 13 21 34

#include<iostream>
using namespace std;
int fibo(int n) {
	if (n <= 1)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}
int main() {
	int n = 0, i = 0;
	cout << "Input of the term to display:";
	cin >> n;
	cout << "Fibonacci series upto to " << n << " terms is:";
	for (i = 0; i < n; i++)
	cout<< fibo(i) << " ";
	return 0;
}
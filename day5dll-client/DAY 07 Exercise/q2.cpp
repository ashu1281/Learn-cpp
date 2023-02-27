//Write a split function to split the fraction from the integer portion of the real number and return both the values.
//Sample Input :
//Input the number : 5.6
//Sample Output :
//The integer portion is : 5
//The fraction portion is : .6

#include<iostream>
using namespace std;

void split(double n, int& a, double& b ) {
	a = n;
	b = n - a;

}

int main() {
	double num = 0.0;
	cout << "Enter the number : ";
	cin >> num;
	int i;
	double f;
	split(num, i, f);
	cout << "The integer portion is : " << i << endl;
	cout << "The fraction portion is : " << f << endl;
}
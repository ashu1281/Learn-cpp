//3. Write a program in C++ to calculate effective resistance of 3 resistors connected in parallel configuration.
//Sample Input :
//Input Resistance 1 : 2
//Input Resistance 2 : 5
//Input Resistance 3 : 10
//
//Sample Output :
//Total Effective Resistance is 1.25 ohms.

#include<iostream>
using namespace std; 

int main() {
	double x = 2, y = 5, z = 10, r = 0;
	r = 1 / (1 / x + 1 / y + 1 / z);
	cout << r << endl;
}
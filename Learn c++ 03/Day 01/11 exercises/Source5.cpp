//2. Write a program to convert the temperature given in Celsius to Fahrenheit.
//Sample Input :
//Input temperature in Celsius : 37.5
//
//Sample Output :
//Temperature in Fahrenheit is : 99.5

#include<iostream>
using namespace std; 

int main() {
	double t = 37.5;
	t = ((t*9)/5) + 32; //converting temperature given in Celsius to Fahrenheit
	cout << t << endl;
}
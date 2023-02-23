/*Write a program that asks the user to enter a positive integer and then computes
the factorial of that integer using a recursive function.If the user enters a negative 
number or a non - integer, the program should throw an exception.*/

#include "Header.h"
#include <iostream>
using namespace std;


int main() {
	int num;
	cout << "Enter a positive Number : ";
	cin >> num;

	try {
		cout << factorial(num) << endl;
	}
	catch(int e){
		cout << "You not entered Positive Number!"<<endl;
	}

	
	

}
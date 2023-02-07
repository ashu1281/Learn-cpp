//Write a program to find the larger number out of the given two numbers using Dynamic Memory Allocation.
//Sample Output :
//Input the first number : 7
//Input the second number : 2
//7 is the larger number.

#include<iostream>
#include"day 08/8.h"
using namespace std;

int main() {
	
	int* pnum1 = new int;
	int* pnum2 = new int;

	cin >> *pnum1;
	cin >> *pnum2;

	int result = 0;

	result = large(pnum1, pnum2);

	delete pnum1;
	pnum1 = nullptr;

	delete pnum2;
	pnum2 = nullptr;

	cout << result << " is the larger number." << endl;


}
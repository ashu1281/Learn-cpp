//Write a program to store n elements in a dynamically allocated arrayand print the elements using the pointer.
//Sample Output :
//Input the number of elements to store in the array : 5
//Input 5 number of elements in the array :
//	element - 0 : 5
//	element - 1 : 7
//	element - 2 : 2
//	element - 3 : 9
//	element - 4 : 8
//	The elements you entered are :
//element - 0 : 5
//element - 1 : 7
//element - 2 : 2
//element - 3 : 9
//element - 4 : 8

#include<iostream>
#include"day 08/8.h"

using namespace std;



int main() {
	int count = 0;
	cout << "Input the number of elements to store in the array : ";
	cin >> count;

	int* parr = new int[count];

	cout << "Input "<<count<<" elements in the array : ";
	for (int i = 0; i < count; i++)
		cin>> parr[i];

	print(parr, &count);


	delete[] parr;
	parr = nullptr;
}
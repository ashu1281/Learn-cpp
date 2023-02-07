//Write a program to demonstrate how to handle the pointers in the program.
//Sample Output :
//Address of a : 0x0019fee8
//Value of a : 10
//
//Now pa is assigned the address of a.
//Value of pa : 0x0019fee8
//Value of * pa : 10
//The value of a is changed to 34 now.
//Value of pa : 0x0019fedc
//Value of * pa : 34
//
//The pointer variable pa is assigned with the value 7 now.
//Address of a : 0x0019fee8
//Value of a : 7
#include<iostream>
using namespace std;

int main() {
	int a;
	cout<<&a<<endl;
	a = 10;

	int* pa = &a;
	cout <<pa<< endl;
	cout << *pa << endl;

	*pa = 34;
	cout << pa << endl;


	* pa = 7;
	cout << &a <<"  "<<pa<<endl;
	cout << a << endl;





}
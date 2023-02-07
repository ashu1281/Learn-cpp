//2. Write a program to compute the volume of a sphere.
//Sample Input :
//Input radius of the sphere : 5.4
//
//Sample Output :
//Volume of a sphere is : 659.58

#include<iostream>
using namespace std; 

int main() {
	double radius = 0, volume = 0;

	cout << "enter radius of the sphere:";
	cin >> radius;

	//volume of the sphere is,

	volume = 1.33 * 3.142 * radius * radius * radius;

	//printing volume of the sphere
	cout <<"volume of the sphere is:" volume << endl;
	return 0;
}
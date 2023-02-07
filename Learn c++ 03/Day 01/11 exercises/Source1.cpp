//1. Write a program to compute the area of a triangle.
//Sample Input :
//Input height of the triangle : 4
//Input base of the triangle : 3
//
//Sample Output :
//Area of a triangle is : 6


#include<iostream>
using namespace std;

int main(){
	double height = 0, base = 0, area=0;
	cout << "enter height of the triangle:";
	cin >> height;

	cout << "enter base of the triangle:";
	cin >> base;

	//area of the triangle is,
	area = 0.5 * height * base;

	cout << "Area of the triangle is:" << area << endl;
	return 0;

}
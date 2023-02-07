//Write a program to calculate the third angle of a triangle if two angles are given.
//Sample Input :
//Input first angle : 60
//Input second angle : 30
//Sample Output :
//Third angle is : 90

#include<iostream>
using namespace std;

int main() {
	double angle1 = 0, angle2 = 0, angle3 = 0;
	cout << "enter first angle of the triangle:";
	cin >> angle1;

	cout << "enter second angle of the triangle:";
	cin >> angle2;

	//third angle of the triangle is,
	angle3 = 180 - angle1 - angle2;

	cout << "The third angle of the triangle is:" << angle3 << endl;
	return 0;

}
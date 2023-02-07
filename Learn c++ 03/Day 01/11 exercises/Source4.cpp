//1. Write a program to convert speed given in kilometers per hour to miles per hour.
//Sample Input :
//Input speed in Km / hr : 60
//
//Sample Output :
//Speed in miles per hour is : 37.2823

#include<iostream>
using namespace std; 

int main() {
	double speed = 0; //speed in kilometers per hour
	cout << "enter speed in Kilometers per hour:";
	cin >> speed;

	speed = speed * 0.6213; //convert speed in kilometers per hour to miles per hour
	cout << "\n" << speed << endl;
	return 0;
}
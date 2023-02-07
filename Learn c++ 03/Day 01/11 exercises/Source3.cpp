//3. Write a program to calculate the distance between two points.Use the sqrt function to compute the square root of a number.
//Sample Input :
//Input x1 : 3
//Input y1 : 2
//Input x2 : 9
//Input y2 : 7
//
//Sample Output :
//Distance between two points is : 7.81024967591

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	cout << "Input x1:";
	cin >> x1;

	cout << "Input y1:";
	cin >> y1;

	cout << "Input x2:";
	cin >> x2;

	cout << "Input y2:";
	cin >> y2;

	double distance = 0;
	distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	cout << "distance between two points is:" << distance << endl;
	
	return 0;

}
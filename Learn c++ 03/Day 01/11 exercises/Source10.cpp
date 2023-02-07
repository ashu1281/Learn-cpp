//Write a program in C++ to calculate final velocity at time T given initial velocityand acceleration.
//Sample Input :
//Input Initial Velocity : 30
//Input Acceleration : 8
//Input Time : 10
//Sample Output :
//Final Velocity is 110 m / s

#include<iostream>
using namespace std;

int main() {
	double velocity = 0, acceleration = 0, time = 0, final_velocity = 0;
	
	cout << "enter the velocity";
	cin >> velocity;

	cout << "enter the acceleration";
	cin >> acceleration;

	cout << "enter the time";
	cin >> time;

	final_velocity = velocity + (acceleration * time);

	cout << "the final velocity is:" << final_velocity << endl;

	return 0;

}

//Write a program to display Pascal’s triangle like a right angle triangle.
//Sample Input :
//Input number of rows : 5
//
//Sample Output :
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

#include<iostream>
using namespace std;

int main() {
	int num = 0, i = 0, j = 0, c = 1;
	cout << "Enter the number of rows : ";
	cin >> num;
	
	for (i = 0; i < num; i++) {
		for (j = 0; j <= i; j++) {
			if (i == 0 || j == 0) 
				c = 1;
			else
				c = c * (i - j + 1) / j;

			cout << c << " ";
			
		}
		cout << endl;
	}
}
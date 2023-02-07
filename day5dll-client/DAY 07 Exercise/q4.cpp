//Write a stats function which computesand returns several statistical results through “out parameters” of a given range of values.
//Sample Input :
//Input 5 number of elements in the array :
//	element - 0 : 5
//	element - 1 : 7
//	element - 2 : 2
//	element - 3 : 9
//	element - 4 : 8
//	Sample Output :
//Min: 2
//Max : 9
//Sum : 31
//Avg : 6.2
//Count : 5

#include<iostream>
#include"day 07/7.h"
using namespace std;

int main(){
	int a[]={0}, n = 0;

	cout << "Enter how many number of elements in array : ";
	cin >> n;

	cout << "Enter elements in array : ";

	for (int i=0; i < n; i++) {
		cin >> a[i];
	}

	int min = 0, max = 0, sum = 0, count = 0;
	double avg = 0;
	stats(a, &min, &max, &sum, &avg, &count, n);

	cout << "Min : " << min << endl;
	cout << "Max : " << max << endl;
	cout << "Sum : " << sum << endl;
	cout << "Avg : " << avg << endl;
	cout << "Count : " << count << endl;

}
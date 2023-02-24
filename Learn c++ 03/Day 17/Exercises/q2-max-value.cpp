/*Write a template function to find the maximum value from an array of any data type.*/

#include<iostream>
using namespace std;

template<class T>
T ArrMax(T arr[], size_t size) {
	T max = arr[1];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int arr1[] = { 1,6,7,3,8,9,4,20,15,6, 30};

	size_t size1 = sizeof(arr1) / sizeof(arr1[0]);

	cout << "The maximum value from an array is : " << ArrMax(arr1, size1) << endl;
	
	double arr2[] = { 1.3,5.1,6.7,1.6,2.8,3.3};

	size_t size2 = sizeof(arr2) / sizeof(arr2[0]);

	cout << "The maximum value from an array is : " << ArrMax(arr2, size2) << endl;
	
}
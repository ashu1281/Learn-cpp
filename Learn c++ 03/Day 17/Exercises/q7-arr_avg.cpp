/*Write a template function to calculate the average of an array of any data type*/

#include <iostream>
using namespace std;

template<class T>

T ArrAvg(T arr[], size_t size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	return sum/size;
}

int main() {
	int arr1[] = { 1,6,4,8,9,4,6,7,2 };
	size_t size1 = sizeof(arr1) / sizeof(arr1[0]);
	cout << "The average of given array is : " << ArrAvg(arr1, size1)<<endl;
	
	double arr2[] = { 1.2,6.3,4.6,9.9 };
	size_t size2 = sizeof(arr2) / sizeof(arr2[0]);
	cout << "The average of given array is : " << ArrAvg(arr2, size2)<<endl;

}
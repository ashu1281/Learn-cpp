/*Create a template function to sort an array of any data type in ascending order.*/

#include<iostream>
#include<ostream>

using namespace std;

template<class T>
void ArrAscend(T arr[], size_t size) {
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			if (arr[i] > arr[j]) {
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int arr1[] = { 1,6,7,3,8,9,4,20,15,6, 30 };

	size_t size1 = sizeof(arr1) / sizeof(arr1[0]);

	ArrAscend(arr1, size1);
	cout << "The ascending orger is : ";

	for (int i = 0; i < size1; i++) {
		cout<< arr1[i] << " ";
	}

	double arr2[] = { 1.3,5.1,6.7,1.6,2.8,3.3 };

	size_t size2 = sizeof(arr2) / sizeof(arr2[0]);

	ArrAscend(arr2, size2);
	cout << endl <<"The ascending orger is : ";

	for (int i = 0; i < size2; i++) {
		cout << arr2[i] << " ";
		}
}
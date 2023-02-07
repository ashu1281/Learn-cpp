//Write a program to sort an array using Pointer.
//Sample Output :
//Input 5 number of elements in the array :
//	element - 1 : 25
//	element - 2 : 45
//	element - 3 : 89
//	element - 4 : 15
//	element - 5 : 82
//	The elements in the array after sorting :
//element - 1 : 15
//element - 2 : 25
//element - 3 : 45
//element - 4 : 82
//element - 5 : 89

#include<iostream>
using namespace std;

void sort(int* ptr, const size_t len) {
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (ptr[i] > ptr[j]) {
				int temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;

			}
		}
	}

}

int main() {
	int a[] = { 25,45,89,15,82};
	const size_t len = sizeof(a) / sizeof(int);

	sort(a, len);
	cout << "The elements in the array after sorting : ";
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";
}

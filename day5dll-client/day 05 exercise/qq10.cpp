//Write a program to get the largest element of an array using recursion.
//Sample Input :
//Input 5 elements in the array :
//	element - 0 : 5
//	element - 1 : 10
//	element - 2 : 15
//	element - 3 : 20
//	element - 4 : 25
//	Sample Output :
//Largest element of an array is : 25


#include <assert.h>
#include "b.h"

int main() {
	int a[] = { 5,10,15,25,20 };
	int alen = sizeof(a) / sizeof(int);

	int largest_element = large(a, alen);

	assert(largest_element = 25);
}


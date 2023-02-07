#include "b.h"
int large(int a[], int alen) {
	if (alen == 1)
		return a[0];

	return max(a[alen - 1], large(a, alen-1));

}

int max(int u, int large_element){
	if (u > large_element)
		return u;
	else
		return large_element;
}
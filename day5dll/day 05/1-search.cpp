#include "b.h"

int search(int a[], int len, int ele, int occ ) {
	int ind = -1;
	int count = 0;
	
	if (occ == 0) {
		for (int i = 0; i < len; i++) {
			if (a[i] == ele) {
				ind = i;
				break;
			}

		}



	}
	else if (occ > 0) {
		for (int i = 0; i < len; i++) {
			if (a[i] == ele) {
				ind = i;
				count++;
				if (count == occ) {
					break;
				}
				
			}
		}
	}
	return ind;

}



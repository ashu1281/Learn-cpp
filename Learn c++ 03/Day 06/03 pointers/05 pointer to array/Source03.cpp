#include <iostream>
using namespace std;

int main() {
	int i = 1, j = 1;
	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

	cout << a << endl;
	cout << "&a[i] = " << &a[i] << ", a + i = " << a + i << endl;
	cout << "&a[i][0] = " << &a[i][0] << ", *(a + i) = " << *(a + i) << endl;//base address of i th row
	cout << "&a[i][j] = " << &a[i][j] << ", *(a + i) + j = " << *(a + i) + j << endl;
	cout << "a[i][j] = " << a[i][j] << ", *(*(a + i) + j) = " << *(*(a + i) + j) << endl;
	return 0;
}

/*
-	a -> base address of double dimension array

-   a + i --> base address of ith row
	a[i] is same as *(a + i)

-	*(a + i) + 0 -> base address of element identified by
	ith row and 0th column

-	*(a + i) + j -> base address of element identified by
	ith row and jth column

-	*(*(a + i) + j) -> value of element identified by
	ith row and jth column


	Mostly we avoid these expressions;
	Avoid pointer arithmetic. Use pointer with array operator instead.
*/
#include"b.h"
bool palindrome(int a) {

	if (a == rev(a))
		return true;
	else
		return false;

}
int rev(int n, int temp){
	if (n == 0) {
		return temp;
	}

	temp = temp * 10 + n % 10;

	return rev(n / 10, temp);
	
}
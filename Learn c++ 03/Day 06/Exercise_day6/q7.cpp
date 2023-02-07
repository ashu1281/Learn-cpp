//Write a program to calculate the length of the string using a pointer.
//Input a string : Hello, World
//Sample Output :
//The length of the given string is : 12


#include<iostream>
#include<string>

using namespace std;

int main() {
	int result = 0;
	char s[] = "Hello, World";

	

	char* ptr = s;

	while (*ptr != '\0') {
		result++;
		ptr++;
	}


	cout << "The length of the given string is : " << result;


}
//Write a program to count the number of vowelsand consonants in a string using a pointer.
//Sample Output :
//Input a string : Hello, World
//Number of vowels : 3
//Number of consonants : 7

#include<iostream>
using namespace std;

int v = 0, c = 0;

int vowels_consonants(char* ptr) {
	
	while (*ptr != '\0') {
		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
			if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
				v++;
			else
				c++;
		}
		ptr++;
	}
	return v, c;

}



int main() {
	int result = 0;
	char str[80];
	cout << "Enter string: ";
	cin.getline(str, 80);

	vowels_consonants(str);

	cout << "Number of vowels : " << v << endl;
	cout << "Number of consonants : " << c;
}

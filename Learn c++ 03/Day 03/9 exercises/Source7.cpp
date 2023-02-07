//Write a program to count all the words in a given string.
//Sample Input : The quick brown fox jumps over the lazy dog
//Sample Output : 9 words


#include<iostream>
#include<string>
using namespace std;


int word_count(string str) {

	int count = 0;

	for (int x = 0; x < str.length(); x++)
	{

		if (str[x] == ' ')
			count++;
	}

	return count + 1;
}

int main() {
	string s = " ";
	cout << "Enter the string: ";
	getline(cin, s);
	cout << "The total number of words in given string: " << word_count(s) << endl;

}

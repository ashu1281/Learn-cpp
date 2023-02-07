//Write a program to capitalize the first letter of each word of a given string.Words must be separated by only one space.
//Sample Input : hello, world
//Sample Output : Hello, World
#include<iostream>
#include<string>
using namespace std; 

string Capitalize(string str) {

	for (int x = 0; x < str.length(); x++)
	{
		if (x == 0)
		{
			str[x] = toupper(str[x]);
		}
		if (str[x] == ' ')
		{
			str[x+1] = toupper(str[x+1]);
		}
		
	}

	return str;
}
int main()
{
	string s = " ";
	cout << "Enter String : ";
	getline(cin, s);

	cout << Capitalize(s) << endl;
	return (0);
}


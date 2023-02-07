//Write a C++ program to change the case (lower to upper and upper to lower cases) of each character of a given string.
//Sample Input : Python
//Sample Output : pYTHON
#include<iostream>
#include<string>
using namespace std;

void upper_string(string str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   
			str[i] = str[i] - 32;

		else if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;

	}
	cout << "\n The string in lower to upper and upper to lower case : " << str;
}
int main()
{
	string s = " ";
	cout << "Enter String : ";
	getline(cin, s);
	upper_string(s);
	return (0);
}
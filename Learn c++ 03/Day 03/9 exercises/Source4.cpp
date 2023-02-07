//Write a program that reverses a string and prints it on the screen.
//Sample Input : Hello, World
//Sample Output : dlroW, olleH


#include<iostream>
#include<string>
using namespace std;



void reverse(string a)
{
    int len = a.length();
    int n = len;
    while (n--)
        cout << a[n];
}

int main()
{
    string s = " ";
    cout << "Enter String : ";
    getline(cin, s);

    reverse(s);
    return (0);
}



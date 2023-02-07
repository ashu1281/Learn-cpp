//Write a program to check if a given string is a Palindrome or not.
//Sample Input : Race car
//Sample Output : True
#include<iostream>
#include<string>
using namespace std;

string isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {

        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return "False";
        }
    }
    // Return "Yes"
    return "True";
}
int main()
{
    string s = " ";
    cout << "Enter String : ";
    getline(cin, s);

    cout << isPalindrome(s) << endl;
    return (0);
}
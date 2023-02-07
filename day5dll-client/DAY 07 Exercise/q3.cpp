//Write a count_vowel function that countsand returns 
//count of each vowel(through “out parameters”) of a given string.
// Strictly no user input output from count_vowel function.
 
//Sample Input :
//Input string : Hello, World
//Sample Output :
//Count of ‘a’ is : 0
//Count of ‘e’ is : 1
//Count of ‘i’ is : 0
//Count of ‘o’ is : 2
//Count of ‘u’ is : 0


#include <iostream>
#include "day 07/7.h"
#include<string>
using namespace std;

int main()
{
    string s = " ";
    cout << "Enter String : ";
    getline(cin, s);

    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;

    count(&s[0], &count_a, &count_e, &count_i, &count_o, &count_u);

    cout << "Count of 'a' is : " << count_a << endl;
    cout << "Count of 'e' is : " << count_e << endl;
    cout << "Count of 'i' is : " << count_i << endl;
    cout << "Count of 'o' is : " << count_o << endl;
    cout << "Count of 'u' is : " << count_u << endl;

    return 0;
}

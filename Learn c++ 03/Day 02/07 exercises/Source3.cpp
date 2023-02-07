//Write a program to calculate the Greatest Common Divisor(GCD) of two numbers.
//Sample Input :
//Input the first number : 25
//Input the second number : 15
//
//Sample Output :
//The Greatest Common Divisor is : 5

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, gcd;

    cout << " Input the first number: ";
    cin >> num1;

    cout << " Input the second number: ";
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << " The Greatest Common Divisor is: " << gcd << endl;
    return 0;
}

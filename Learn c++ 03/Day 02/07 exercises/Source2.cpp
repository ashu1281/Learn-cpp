//Write a program to calculate the factorial of a number.
//Sample Input :
//Input a number to find the factorial : 5
//
//Sample output :
//The factorial of the given number is : 120

#include <iostream>

using namespace std;


int factorial(int n)
{

    if (n == 0 || n == 1)

        return 1;

    return n * factorial(n - 1);
}


int main()
{

    int num = 0;
    
    cout << "Enter the Number : ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}
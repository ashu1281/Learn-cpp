//Write a program to add two numbers using pointers.
//Sample Output :
//Input the first number : 7
//Input the second number : 2
//The sum of the entered numbers is : 9

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int* ptr1, * ptr2;
    int sum;
    cout << "\n Enter first number: ";
    cin >> num1;
    cout << "\n Enter second number: ";
    cin >> num2;
    ptr1 = &num1; 
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    cout << "\n Sum is: " << sum;
    return 0;
}
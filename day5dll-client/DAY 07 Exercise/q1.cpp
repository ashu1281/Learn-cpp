//Write an add function to add two numbers using pass by address.
//Sample Input :
//Input the first number : 7
//Input the second number : 2
//Sample Output :
//The sum of the entered numbers is : 9


#include <iostream>
#include "day 07\7.h"

using namespace std;


int main(){
    int num1, num2;
    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "\nEnter second number: ";
    cin >> num2;

    cout << "\nThe sum of the entered numbers is : " << Add(&num1, &num2) << endl;

    }
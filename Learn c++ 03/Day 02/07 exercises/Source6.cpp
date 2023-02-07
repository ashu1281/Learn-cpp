//Write a program in C++ to find LCM of any two numbers using HCF.
//Sample Input :
//Input 1st number for LCM : 15
//Input 2nd number for LCM : 25
//
//Sample Output :
//The LCM of 15 and 25 is : 75


#include <iostream>
using namespace std;

int main()
{
    int i, n1, n2, j, hcf = 1, lcm;
    cout << " Input 1st number for LCM: ";
    cin >> n1;
    cout << " Input 2nd number for LCM: ";
    cin >> n2;

    j = (n1 < n2) ? n1 : n2;

    for (i = 1; i <= j; i++) {

        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }

    /* mltiplication of HCF and LCM = the multiplication of these two numbers.*/
    lcm = (n1 * n2) / hcf;
    cout << " The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
}

//Write a program to find the second largest element in a given array of integers.
//Sample Input : -4 3 6 2 - 3 - 1 7 9
//Sample Output : 7

#include<iostream>
using namespace std;
int main()
{
    int A[10]{}, n, i, j, temp;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> A[i];

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout << "Second largest number : " << A[1];

    return 0;
}
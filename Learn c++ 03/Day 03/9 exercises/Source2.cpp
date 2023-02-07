//Write a program to find the most occurring element in a given array of integers.
//Sample Input : -4 3 6 2 - 3 - 1 7 9 - 3
//Sample Output : -3

#include <iostream>
using namespace std;
int main()
{
    int i, j, a[9], n = 0;
    int most_occur = a[0];
    int temp = 0, tempCount, count = 1;
    
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements: " << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        tempCount = 0;
        temp = a[i];
        tempCount++;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] == temp)
            {
                tempCount++;
                if (tempCount > count)
                {
                    most_occur = temp;
                    count = tempCount;
                }
            }
        }
    }
    cout << "the most occurring element in a given array of integers : " << most_occur;
}
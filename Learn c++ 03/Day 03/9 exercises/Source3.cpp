//Write a program that rearranges all negative integers before all positive integers in a given array of mixed positiveand negative integers.
//Sample Input : -4 3 6 2 - 3 - 1 7 9
//Sample Output : -4 - 3 - 1 3 6 2 7 9


#include <iostream>
using namespace std;

// Swap Function.
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void reArrange(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low < high) {
        if (arr[low] < 0) {
            low++;
        }
        else if (arr[high] > 0) {
            high--;
        }
        else {
            swap(arr[low], arr[high]);
        }
    }
}
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Data
    int arr[10], m = 0;
    cout << "Enter Size of Array: ";
    cin >> m;

    cout << "Enter elements of array : ";
    for (int i = 0; i < m; i++)
        cin >> arr[i];

    int n = sizeof(arr) / sizeof(arr[0]);
    reArrange(arr, n);
    displayArray(arr, n);
    return 0;
}
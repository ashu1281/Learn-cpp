//Write the matrix multiplication program using dynamic memory allocation.
//Sample Input :
//Input number of rows for the first array : 2
//Input number of columns for the first array : 2
//Input number for row 1 col 1 : 3
//Input number for row 1 col 2 : 2
//Input number for row 2 col 1 : 5
//Input number for row 2 col 2 : 7
//Input number of rows for the second array : 2
//Input number of columns for the second array : 1
//Input number for row 1 col 1 : 4
//Input number for row 2 col 1 : 7
//Sample Output :
//26
//69


#include <iostream>
using namespace std;

void matrix_multiplication(int** a, int** b, int** c, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;

    cout << "Enter the number of rows for the first array: ";
    cin >> m;

    cout << "Enter the number of columns for the first array: ";
    cin >> n;

    int** a = new int* [m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cout << "Enter number for row " << i + 1 << " column " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    cout << "Enter the number of rows for the second array: ";
    cin >> n;

    cout << "Enter the number of columns for the second array: ";
    cin >> p;

    int** b = new int* [n];
    for (int i = 0; i < n; i++) {
        b[i] = new int[p];
        for (int j = 0; j < p; j++) {
            cout << "Enter number for row " << i + 1 << " column " << j + 1 << ": ";
            cin >> b[i][j];
        }
    }

    int** c = new int* [m];
    for (int i = 0; i < m; i++) {
        c[i] = new int[p];
    }

    matrix_multiplication(a, b, c, m, n, p);

    cout << "Result:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < m; i++) {
        delete[] a[i];
    }
    delete[] a;

    for (int i = 0; i < n; i++) {
        delete[] b[i];
    }
    delete[] b;

    for (int i = 0; i < p; i++) {
        delete[] c[i];
    }
    delete[] c;


    return 0;
}
//Write the matrix transpose program using dynamic memory allocation.
//Sample Input :
//Input number of rows for the first array : 2
//Input number of columns for the first array : 3
//Input number for row 1 col 1 : 3
//Input number for row 1 col 2 : 2
//Input number for row 1 col 3 : 5
//Input number for row 2 col 1 : 7
//Input number for row 2 col 2 : 1
//Input number for row 2 col 2 : 9
//Sample Output :
//3	7
//2	1
//5	9

#include <iostream>
using namespace std;

void transpose(int** matrix, int rows, int cols) {
    int** transposeMatrix = new int* [cols];  // allocate memory for transpose matrix

    for (int i = 0; i < cols; i++) {
        transposeMatrix[i] = new int[rows];
    }

    // copy elements and transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }

    // print transpose matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposeMatrix[i][j] << "\t";
        }
        cout << endl;
    }

    // free memory
    for (int i = 0; i < cols; i++) {
        delete[] transposeMatrix[i];
    }
    delete[] transposeMatrix;
}

int main() {
    int rows, cols;
    cout << "Input number of rows for the array: ";
    cin >> rows;
    cout << "Input number of columns for the array: ";
    cin >> cols;

    // allocate memory for matrix
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // read input elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Input number for row " << i + 1 << " col " << j + 1 << " : ";
            cin >> matrix[i][j];
        }
    }

    cout << "Transpose matrix: " << endl;
    transpose(matrix, rows, cols);

    // free memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

//Implement Cramer’s Rule to solve systems of simultaneous equations a1x + b1y = c1 and a2x + b2x = c2 using dynamic memory allocation.
//Sample Input :
//Input value for a1 : 2
//Input value for b1 : 5
//Input value for c1 : -7
//Input value for a2 : 3
//Input value for b2 : 1
//Input value for c2 : 9
//Sample Output :
//x is 4
//y is - 3


#include <iostream>
using namespace std;

int main() {
    int* matrix = new int[6];
    int* matrix2 = new int[6];

    // Input values for the first equation
    cout << "Input value for a1 : ";
    cin >> matrix[0];
    cout << "Input value for b1 : ";
    cin >> matrix[1];
    cout << "Input value for c1 : ";
    cin >> matrix[2];

    // Input values for the second equation
    cout << "Input value for a2 : ";
    cin >> matrix[3];
    cout << "Input value for b2 : ";
    cin >> matrix[4];
    cout << "Input value for c2 : ";
    cin >> matrix[5];

    // Calculate the determinants
    int detA = matrix[0] * matrix[4] - matrix[1] * matrix[3];
    int detX = matrix[2] * matrix[4] - matrix[1] * matrix[5];
    int detY = matrix[0] * matrix[5] - matrix[2] * matrix[3];

    // Check if the system has a unique solution
    if (detA == 0) {
        cout << "The system has no unique solution." << endl;
    }
    else {
        // Calculate the values of x and y
        double x = (double)detX / detA;
        double y = (double)detY / detA;

        // Output the results
        cout << "x is " << x << endl;
        cout << "y is " << y << endl;
    }

    delete[] matrix;
    delete[] matrix2;

    return 0;
}

//Write a roots function that computes and returns roots of a quadratic expression through “out parameters”.
//Sample Input :
//Input coefficient ‘a’ : 5
//Input coefficient ‘b’ : 6
//Input constant ‘c’ : 1
//Sample Output :
//Root 1 is : -0.2
//Root 2 is : -1



#include <iostream>
#include <cmath>
using namespace std;

bool roots(double a, double b, double c, double* root1, double* root2) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        return false;
    }
    else {
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
        return true;
    }
}

int main() {
    double a = 5;
    double b = 6;
    double c = 1;
    double root1, root2;

    if (roots(a, b, c, &root1, &root2)) {
        cout << "Roots are " << root1 << " and " << root2 << endl;
    }
    else {
        cout << "No real roots" << endl;
    }
    return 0;
}

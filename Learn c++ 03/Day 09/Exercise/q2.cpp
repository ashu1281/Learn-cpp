//Define missing symbols to complete the following testing code.

//// t.A, t.B, t.C are of Angle type each containing a member value.
//// t.a, t.ac, t.bc are of Side type each containing a member value.
//// Note t.a, t.b, t.c are sides against angle A, B, C respectively.
//// Note angles are in radians.
//Sample Input :
//Input the lengths of three sides(a, b, c) of a triangle :
//Input length of side a : 7
//Input length of side b : 10
//Input length of side c : 5
//Sample Output :
//Measure of Angle A is 0.707483
//Measure of Angle B is 1.95134
//Measure of Angle C is 0.482766


#include<iostream>
#include<cmath>
#include<assert.h>
using namespace std;

struct Side {
    double value;
};

struct Angle {
    double value;
};


struct Triangle {
    Side a, b, c;
    Angle A, B, C;
};

bool SidesFormTriangle(Triangle& t) {
    double a = t.a.value, b = t.b.value, c = t.c.value;
    
    return a + b > c && b + c > a && a + c > b;
}

void ComputeAnglesFromSides(Triangle& t) {

    double a = t.a.value, b = t.b.value, c = t.c.value;
    
    t.A.value = acos((b*b + c*c - a*a) / (2 * b * c));
    t.B.value = acos((a*a + c*c - b*b) / (2 * a * c));
    t.C.value = acos((a*a + b*b - c*c) / (2 * a * b));
}



int main() {
    Triangle t;
    cout << "Input the lengths of three sides (a, b, c) of a triangle:" << endl;
    cout << "Input length of side a: " << flush;
    cin >> t.a.value;
    cout << "Input length of side b: " << flush;
    cin >> t.b.value;
    cout << "Input length of side c: " << flush;
    cin >> t.c.value;
    if (SidesFormTriangle(t)) {
        ComputeAnglesFromSides(t);
        cout << "Measure of Angle A is " << t.A.value << endl;
        cout << "Measure of Angle B is " << t.B.value << endl;
        cout << "Measure of Angle C is " << t.C.value << endl;
    }
    else {
        cout << "Given lengths of sides cannot form a triangle." << endl;
    }
}
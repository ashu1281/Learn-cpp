//Define missing symbols to complete the following testing code.

#include<iostream>
#include <assert.h>
#define PI 3.14

struct Circle {
    double radius;
};
double CalculateArea(Circle c) {
    return PI * c.radius* c.radius;
}

int main() {
    Circle c{ 10 };
    double area = CalculateArea(c);
    assert(area == 314);
    std::cout << "Area of circle of radius " << c.radius
        << " is " << area << std::endl;
}

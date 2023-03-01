//Define missing symbols t/o complete the following testing code.

#include<iostream>
#include<assert.h>
using namespace std;


enum unit {
    Celsius,
    Fahrenheit
};
struct Temperature {
    double value;
    unit unit;
    
};

void ChangeTemperatureUnit(Temperature& t, unit degree) {
    if (degree == Fahrenheit) {//celsius to fahrenheit
        t.value = ((t.value * (9.0 / 5)) + 32);
        t.unit = degree;
    }
    else {//fahrenheit to celsius
        t.value = ((t.value - 32) * (5.0 / 9));
        t.unit = degree;
    }


}


int main() {
    Temperature t{ 37.5, Celsius };
    ChangeTemperatureUnit(t, Fahrenheit);
    assert(t.value == 99.5 && t.unit == Fahrenheit);
}




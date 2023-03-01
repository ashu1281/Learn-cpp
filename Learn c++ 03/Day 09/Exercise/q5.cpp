//Define missing symbols to complete the following testing code.

#include <iostream>
#include <assert.h>
#include <iomanip>

using namespace std;


struct Resistor {
    double resistance;
    Resistor(double r) : resistance(r) {}
};

double EffectiveSeriesResistance(Resistor* resistors[], int num) {
    double effective = 0.0;
    for (int i = 0; i < num; i++) {
        effective += resistors[i]->resistance ;
    }

    return effective;
}

double EffectiveParallelResistance(Resistor* resistors[], int count) {
    double effective = 0.0;
    for (int i = 0; i < count; i++) {
        effective += (1.0 / resistors[i]->resistance);
    }
    return (1.0 / effective);
}


int main() {
    Resistor r1{ 2.0 }, r2{ 3.0 }, r3{ 0.0 };
    Resistor* resistors[]{ &r1, &r2 };
    double resistance = 0.0;
    

    resistance = EffectiveSeriesResistance(resistors, 2);
    assert(resistance == 5.0);

    assert(r1.resistance > 0.0 && r2.resistance > 0.0);
    resistance = EffectiveParallelResistance(resistors, 2);
    assert(resistance == 1.2);
}

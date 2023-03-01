//Write a total_capacitance function to compute total capacitance of two capacitors in seriesand parallel.Google for the formulas.Test your total_capacitance function with the following testing code.

#include <assert.h>
void total_capacitance(double c1, double c2, double& cs, double& cp) {
    // Compute capacitance in series
    cs = c1 * c2 / (c1 + c2);

    // Compute capacitance in parallel
    cp = c1 + c2;
}

int main() {
    double c1 = 100, c2 = 300;
    double cs = 0.0, cp = 0.0;

    total_capacitance(c1, c2, cs, cp);
    assert(cs == 75.0 && cp == 400.0);
}
// Define your total_capacitance function here


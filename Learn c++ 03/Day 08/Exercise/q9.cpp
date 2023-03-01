//Write a convert function to convert seconds to hours minutes seconds.Test your convert function with the following testing code.


#include <assert.h>
#include <cmath>
void convert(int& h, int& m, int& s) {
    //s to m
    m = s / 60;
    s = s % 60;

    //m to h
    h = m / 60;
    m %= 60;
}

int main() {
    int hh = 0, mm = 0, ss = 1432;
    convert(hh, mm, ss);
    assert(hh == 0 && mm == 23 && ss == 52);
}

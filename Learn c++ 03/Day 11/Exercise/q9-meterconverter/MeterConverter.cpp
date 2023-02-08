#include "MeterConverter.h"

MeterConverter::MeterConverter(double r, double i) {
    real = r;
    imaginary = i;
}

double MeterConverter::ToFoot() {
    return real * 3.28084;
}

double MeterConverter::ToInch() {
    return real * 39.3700787402;
}

double MeterConverter::ToMeter() {
    return real * 1;
}

double MeterConverter::ToYard() {
    return real * 1.0936;

}
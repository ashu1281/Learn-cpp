#include <cmath>
#include "Complex.h"

Complex::Complex() {
    double  real = 0;
    double  imag = 0;
}

Complex::Complex(int r, int i) {
    real = r;
    imag = i;
}

int Complex::GetR() {
    return real;
}
int Complex::GetI() {
    return imag;
}

Complex Complex::Add(Complex c) {
    Complex result;
    result.real = real + c.real;
    result.imag = imag + c.imag;

    return result;

}
Complex Complex::Sub(Complex c) {
    Complex result;
    result.real = real - c.real;
    result.imag = imag - c.imag;

    return result;

}

Complex Complex::Mul(Complex c) {
    Complex result;
    result.real = ((real * c.real) - (imag * c.imag));

    result.imag = ((real * c.imag) + (imag * c.real));

    return result;

}
Complex Complex::Div(Complex c) {
    Complex result;
    result.real = ((real * c.real) + (imag * c.imag)) / (pow(c.real, 2) + pow(c.imag, 2));

    result.imag = ((imag * c.real) - (real * c.imag)) / (pow(c.real, 2) + pow(c.imag, 2));

    return result;

}

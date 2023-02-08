#pragma once

class Complex {
public:
	double real;
	double imag;

	Complex();
	Complex(int r, int i = 0);

	int GetR();
	int GetI();

	Complex Add(Complex c);
	Complex Sub(Complex c);
	Complex Mul(Complex c);
	Complex Div(Complex c);

};
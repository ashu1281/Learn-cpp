#pragma once

class MeterConverter {
public:
    double real=0;
    double imaginary=0;

public:
    MeterConverter(double r=0, double i = 0);

public:
    double ToFoot();
    double ToInch();
    double ToMeter();
    double ToYard();

};
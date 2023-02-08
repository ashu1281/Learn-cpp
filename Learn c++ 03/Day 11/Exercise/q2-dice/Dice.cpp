#include "Dice.h"
#include <assert.h>
#include<cstdlib>

Dice::Dice() {
    int value = 0;
}

int Dice::GetFaceValue() {
    assert(value >= 1 && value <= 6);
    return value;
}

void Dice::Roll() {
    value = ((rand() % 6) + 1);
}
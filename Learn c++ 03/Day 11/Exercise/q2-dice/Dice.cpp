#include "Dice.h"
#include <assert.h>
#include<cstdlib>

Dice::Dice() {
    int m_faceValue = 0;
}

void Dice::Roll() {
    m_faceValue = ((rand() % 6) + 1);
}

int Dice::GetFaceValue() const {
    assert(m_faceValue >= 1 && m_faceValue <= 6);
    return m_faceValue;
}


#include <assert.h>
#include "Dice.h"

#define MAXREADINGS 100


int main() {
    int value = 0;
    Dice redDice;

    // Following loop rolls the redDice TURN times and
    // notes down the face value in an array.
    int faceValues[MAXREADINGS] = { 0 };
    for (int i = 0; i < MAXREADINGS; i++) {
        redDice.Roll();
        faceValues[i] = redDice.GetFaceValue();
    }

    // The array is then analyzed to check two conditions
    // 1. If the produced face value is between 1 to 6.
    // 2. If the produced face values are random.
    // If same face value occurs MAXREADING - 1
    // then there is fault in the simulated dice object.
    // It is not producing random values.
    int sameFaceValue = 0;
    for (int i = 1; i < MAXREADINGS; i++) {
        // Following assert checks if value is between 1 to 6.
        assert(faceValues[i - 1] >= 1 && faceValues[i - 1] <= 6);
        if (faceValues[i] == faceValues[i - 1])
            sameFaceValue++;
    }
    // Following assert checks for randomness of facevalues.
    assert(sameFaceValue != MAXREADINGS - 1);
}

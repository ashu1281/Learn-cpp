//Write a palindrome function to check if the given number is palindrome or not.Use recursive strategy to check.Test your fibonacci function using the following testing code.
#include <assert.h>
#include "b.h"

int main() {
    bool palin = true;

    palin = palindrome(12321);
    assert(palin);

    palin = palindrome(102);
    assert(!palin);
}

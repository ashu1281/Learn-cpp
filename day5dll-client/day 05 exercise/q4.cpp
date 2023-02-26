//Modify dow function to allow to configure the start of the week, other than Sunday.Test your dow function with the following testing code.
#include "day 05/b.h"
#include <assert.h>


int main() {
    DayNumber result = Sun;
    result = dow(12, 9, 2020, DayNumber::Mon); // Mon as start of the week
    assert(result == 5); // Note change in the day number
}
// Define your dow function here

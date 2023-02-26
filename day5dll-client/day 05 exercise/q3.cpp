//Write a dow function that returns the day of week.https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week shows how to calculate day of week. Test your dow function with the following testing code. Assume Sunday to be the first day of week.

#include "day 05/b.h"
#include <assert.h>

int main() {
    DayNumber result = Sun;
    result = dow(12, 9, 2020);
    assert(result == 6);
}
// Define your dow function here

#include "b.h"
#include <cmath>
using namespace std;



DayNumber dow(int day, int month, int year, DayNumber startOfWeek) {
    // Use Zeller's congruence formula
    int startOfWeekIndex = static_cast<int>(startOfWeek);
    int q = day;
    int m = month;
    if (m < 3) {
        m += 12;
        year--;
    }
    int K = year % 100;
    int J = year / 100;
    int h = (q + ((13 * (m + 1)) / 5) + K + (K / 4) + (J / 4) - 2 * J) % 7;
    int dayOfWeekIndex = (h + 7 - startOfWeekIndex) % 7;
    return static_cast<DayNumber>(dayOfWeekIndex);
}
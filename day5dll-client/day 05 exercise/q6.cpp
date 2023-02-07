#include <assert.h>
#include "b.h"
enum SortOrder { Ascending, Descending };
int main() {
    int a[]{ 6, 4, 3, 8, 7, 9, 1, 0, 2, 5 };
    size_t size = sizeof(a) / sizeof(int);
    sort(a, size); // Sorts ascending by default
    for (size_t i = 0; i < size; ++i) {
        assert(a[i] == i);
    }
    sort(a, size, Descending);
    for (size_t i = 0; i < size; --i) {
        assert(a[i] == 9 - i);
    }
    sort(a, size, Ascending);
    for (size_t i = 0; i < size; ++i) {
        assert(a[i] == i);
    }
}

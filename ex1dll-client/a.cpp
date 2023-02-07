#include <assert.h>
#include "b.h"
int main() {
    int a[7], b[] = { 10, 20, 30, 40, 50, 60, 70 };
    int len = sizeof(a) / sizeof(int);
    copy(a, b, len);
    for (int i = 0; i < len; ++i) {
        assert(a[i] == b[i]);
    }
}

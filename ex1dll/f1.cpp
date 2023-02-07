#include "b.h"

void copy(int a[], int b[], int len) {
    int i;
        for (i = 0; i < len; i++) {
            b[i] = a[i];
        }
}
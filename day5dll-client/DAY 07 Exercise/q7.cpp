//Write a generate function to generate values for range with function.Test your generate function with the following testing code.


#include <assert.h>

#include <functional>



int Odd() {
    static int n = -1;
    n += 2;
    return n;
}
int Natural() {
    static int n = 0;
    return ++n;
}

void generate(int* arr, int size, int(*generator)()) {
    for (int i = 0; i < size; ++i) {
        arr[i] = generator();
    }
}

int main() {
    int a[5]{ 0 };

    generate(a, 5, Odd);
    for (int i = 0, j = 1; i < 5; ++i, j += 2) {
        assert(a[i] == j);
    }
    generate(a, 5, Natural);
    for (int i = 0, j = 1; i < 5; ++i, ++j) {
        assert(a[i] == j);
    }
}
// Define your generate function here


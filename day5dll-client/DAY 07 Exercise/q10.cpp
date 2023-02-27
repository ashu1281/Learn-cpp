//Write a for_each function that applies a function to the range.Test your for_each function with the following testing code.


#include <assert.h>

void for_each(int* arr, size_t len, int multi(int n)) {
    for (size_t i = 0; i < len; ++i) {
        arr[i]=multi(arr[i]);
    }
}

int multiply_by_2(int n) {
    return 2 * n;
}
int main() {
    int a[]{ 1, 2, 3, 4, 5 };
    int result[]{ 2, 4, 6, 8, 10 };
    for_each(a, 5, multiply_by_2);
    for (int i = 0; i < 5; ++i) {
        assert(a[i] == result[i]);
    }

}
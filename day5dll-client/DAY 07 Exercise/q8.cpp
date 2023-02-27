//Write a conditional copy_if function to copy certain elements of range.Test your copy_if function with the following testing code.


#include <assert.h>

int copy_if(int* arr2, int len2, const int* arr1, int len1, bool(*check)(int n)){
    int count = 0;
    for (int i = 0; i < len1 && count < len2; ++i) {
        if (check(arr1[i])) {
            arr2[count++] = arr1[i];
        }
    }
    return count;

}

bool is_positive(int n) {
    return n >= 0;
}
int main() {
    int a[5]{ -3, 1, -2, 6, 9 };
    int b[5]{ 0 };

    int count = copy_if(b, 5, a, 5, is_positive);
    for (int i = 0; i < count; ++i) {
        assert(b[i] >= 0);
    }
}

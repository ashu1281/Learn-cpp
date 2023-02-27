//Write a conditional find_if function that returns the address of the first element in the range for which the predicate returns true.Here predicate is a condition function that tests input argument(s) based upon some test expressionand returns either true or false if it or it doesn’t fit the condition.Test your pred function with the following testing code.

#include <cstring>
#include <assert.h>




char* find_if(char* start, bool pred(char c)) {
    while (*start) {
        if (pred(*start)) {
            return start;
        }
        start++;
    }
    return nullptr;
}

bool pred(char c) {
    return c == 'd';
}
int main() {
    char s[] = "the lazy dog jumped over the brown fox";
    char* t = find_if(s, pred);
    assert(strcmp(t, "dog jumped over the brown fox") == 0);
}
// Define your find_if function here

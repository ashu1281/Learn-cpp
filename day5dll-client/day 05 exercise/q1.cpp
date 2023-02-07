#include <assert.h>
#include "b.h"
int main() {
    int a[]{ 1, 2, 3, 4, 5, 3 }, result = 0;
    result = search(a, 6, 3, 2);
    assert(result == 5);
   
    result = search(a, 6, 3);
    assert(result == 2);

    

    result = search(a, 4, 3);
    assert(result == 2);

    result = search(a, 6, 7);
    assert(result == -1);
}

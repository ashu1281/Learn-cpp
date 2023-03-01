//Define missing symbols to complete the following testing code.

#include <iostream>
#include <assert.h>
using namespace std;

struct Set {
    int* values;
    size_t size;

};

void Union(const Set& s,const Set& t, Set* u) {
    int* temp = new int[s.size + t.size];
    int index = 0;

    for (int i = 0; i < s.size; i++) {//copy all values of s in temp.
        bool duplicate = false;
        for (int j = i+1; j < s.size; j++) { //removes duplicate elements.
            if (s.values[i] == s.values[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            temp[index++] = s.values[i];
        }
    }

    for (int i = 0; i < t.size; i++) {
        bool duplicate = false;
        for (int j = 0; j < s.size; j++) {
            if (t.values[i] == s.values[j]) {
                duplicate = true;
                break;
            }
        }
        for (int j = i + 1; j < t.size; j++) {
            if (t.values[i] == t.values[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            temp[index++] = t.values[i];
        }
    }
    u->size = index;
    u->values = temp;
}


void Intersect(const Set& s, Set& t, Set* u) {
    int* temp = new int[s.size];
    int index = 0;

    for (int i = 0; i < s.size; i++) {
        for (int j = 0; j < t.size; j++) {
            if (s.values[i] == t.values[j]) {
                temp[index++] = s.values[i];
                break;
            }
        }

    }
    int index2 = 0;
    for (int i = 0; i < index; i++) {
        bool duplicate = false;
        for (int j = i + 1; j < index; j++) {
            if (temp[i] == temp[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            temp[index2++] = temp[i];
        }
    }

    u->values = temp;
    u->size = index2;
}


int main() {
    Set s{ nullptr };
    s.size = 8;
    s.values = new int[s.size] { 1, 2, 3, 3, 4, 5, 9, 0 };
    Set t{ nullptr };
    t.size = 5;
    t.values = new int[t.size] { 1, 3, 4, 5, 5};
    Set u{ nullptr };

    Union(s, t, &u);
    int union_result[]{ 1, 2, 3, 4, 5, 9, 0 };
    for (size_t i = 0; i < u.size; ++i) {
        assert(i < sizeof(union_result) / sizeof(int));
        assert(u.values[i] == union_result[i]);
    }
  

    delete[] u.values;
    u.values = nullptr;

    Intersect(s, t, &u);
    int intersect_result[]{ 1, 3, 4, 5};
    for (size_t i = 0; i < u.size; ++i) {
        assert(i < sizeof(intersect_result) / sizeof(int));
        assert(u.values[i] == intersect_result[i]);
    }
    /* write dynamic object release code here
     Check if dynamically allocated memory is released*/


    delete[] s.values;    
    delete[] t.values;
    delete[] u.values;

    _CrtDumpMemoryLeaks();
}

//DAY 07 ALL FUNCTIONS
#include "7.h"
#include<iostream>


int Add(int* p1, int* p2) {
    return *p1 + *p2;
}


void count(char* str, int* a, int* e, int* ii, int* o, int* u) {
    int i = 0;
    while (str[i] != '\0') {

        if ((str[i] == 'a') || (str[i] == 'A'))
             (*a)++;
        else if ((str[i] == 'e') || (str[i] == 'E'))
             (*e)++;
        else if ((str[i] == 'i') || (str[i] == 'I'))
             (*ii)++;
        else if ((str[i] == 'o') || (str[i] == 'O'))
             (*o)++;
        else if ((str[i] == 'u') || (str[i] == 'U'))
             (*u)++;

        i++;
    }
    /*return a, e, i, o, u;
    */

}

void stats(int* a, int* min, int* max, int* sum, double* avg, int* count, int n) {

    *max = a[0], * min = a[0], * sum = 0, * avg = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > *max)
            *max = a[i];
        if (a[i] < *min)
            *min = a[i];

        *sum += a[i];
    }
    *count = n;
    *avg = (*sum) / (*count);


}
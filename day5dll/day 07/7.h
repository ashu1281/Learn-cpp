//DAY 07 ALL HEADERS

#pragma once

#ifdef B_EXPORTS
#define EXPIMP _declspec(dllexport)

#else
#define EXPIMP _declspec(dllimport)
#endif

int EXPIMP Add(int* p1, int* p2);

void EXPIMP count(char* str, int* a, int* e, int* ii, int* o, int* u);

void EXPIMP stats(int* a, int* min, int* max, int* sum, double* avg, int* count, int n);

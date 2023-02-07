#pragma once

#ifdef B_EXPORTS
#define EXPIMP _declspec(dllexport)

#else
#define EXPIMP _declspec(dllimport)
#endif

int EXPIMP large(int* p, int* q);

void EXPIMP print(int* parr, int* size);
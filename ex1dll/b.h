

#pragma once

#ifdef B_EXPORTS
#define EXPIMP _declspec(dllexport)

#else
#define EXPIMP _declspec(dllimport)
#endif

void EXPIMP  copy(int a[], int b[], int len);

extern const EXPIMP double PI;
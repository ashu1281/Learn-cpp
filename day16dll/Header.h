#pragma once

#ifdef B_EXPORTS
#define EXPIMP _declspec(dllexport)

#else
#define EXPIMP _declspec(dllimport)
#endif

int EXPIMP factorial(int n);



#pragma once

#ifdef B_EXPORTS
#define EXPIMP _declspec(dllexport)

#else
#define EXPIMP _declspec(dllimport)
#endif

int EXPIMP search(int a[], int len, int ele, int occ = 0);
int EXPIMP sum(int n);
//void EXPIMP sort(int a[], size_t size, char str[] = {0});
int EXPIMP len(int n);

int EXPIMP fibonacci(int n);

bool EXPIMP palindrome(int n);
int EXPIMP rev(int n, int temp = 0);

int EXPIMP large(int a[], int alen);
int EXPIMP max(int u, int large_element);
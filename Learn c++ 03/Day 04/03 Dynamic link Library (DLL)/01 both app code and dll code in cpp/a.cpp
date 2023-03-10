#include<cstdio>
#include"b.h"

int main() {
	int result = 0;
	result = Add(3, 2);
	printf("The result is = %d\n", result);
}


/*
* _declspec(dllimport) is known as decorator.
* The symbol on which _declspec(decorator) is written, implies that the symbol is imported from some DLL.
* When linker is invoked with /DLL switch, it results into 3 files viz. .dll, .exp and .lib.
* The .lib file is known as import library.
* Import library is different from static library. Typical, static library contains binary code of symbols.
  Import library contains names of the symbols exported from DLL. It dosn't contains symbol code.
* Actual definition of symbols is present in .dll. 
* 
- Command Shell commands to build dynamic link library:
	cl /c b.cpp   --> makes b.obj file
	link/DLL b.obj     --> makes b.lib, b.exp and b.dll file

- command shell commands to build executable:
	cl /c a.cpp  --> makes a.obj file

	link a.obj b.lib --> makes a.exe file ORS
		you can give your name to exe file by below command
		link a.obj b.lib /OUT: filename.exe 


*/
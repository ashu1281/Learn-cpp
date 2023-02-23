#include<cstdio>
#include"b.h"
#include"Circle.h"

int main() {
	int result = 0;
	result = Add(1, 2);
	printf("The result is = %d\n", result);
	/*printf("value Of PI=%lf", PI);*/
	Circle u(10);
	printf("Area = %lf\n", u.GetArea());
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
/*
- In impicit linking the DLL is loaded at the application startup.
- It remains loaded until application ends.
- The loading of the dll can delayed when the symbol is actually needed.
	Such setup is called as dalay loading dll.

- if gobal varible not supported in delay loading,
	you have to comment pi line in above and d.h also.
*/
#include<cstdio>
int Add(int u, int v);

int main() {
	int result = 0;
	result = Add(3, 2);
	printf("The result is = %d\n", result);
}
/*
- Command Shell commands to build static library:
	cl /c b.cpp   --> makes b.obj file
	lib b.obj     --> makes b.lib file

- command shell commands to build executable:
	cl /c a.cpp  --> makes a.obj file

	link a.obj b.lib --> makes a.exe file ORS
		you can give your name to exe file by below command
		link a.obj b.lib /OUT: filename.exe 


*/
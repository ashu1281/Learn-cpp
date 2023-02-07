#include <crtdbg.h>

int main() {
	int* pn = new int;
	*pn = 1;
	pn = nullptr;// here you have to use delete before it

	pn = new int;
	*pn = 2;
	delete pn;
	pn = nullptr;

	_CrtDumpMemoryLeaks();
}
/*
mostly creating new ptr delete previous one
*/
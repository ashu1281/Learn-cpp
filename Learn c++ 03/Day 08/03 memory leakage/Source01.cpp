#include <crtdbg.h>

int main() {
	int* pn = new int;
	*pn = 1;
	//delete pn;
	pn = nullptr;
	_CrtDumpMemoryLeaks();
}
/*
- _CrtDumpMemoryLeaks(); this the api which tels leakage(leaking memory or not) happening or not
*/
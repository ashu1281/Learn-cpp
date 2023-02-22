#include "Employee.h"

#include <assert.h>

#include <cstring>

int main() {
	Employee u("Abc", 25, "Accounts");
	assert(strcmp(u.GetName(), "Abc") == 0);
	assert(u.GetAge() == 25);
	assert(strcmp(u.GetDepartment(), "Accounts") == 0);

	Employee v("Defgh", 27, "Legal");
	assert(strcmp(v.GetName(), "Defgh") == 0);
	assert(v.GetAge() == 27);
	assert(strcmp(v.GetDepartment(), "Legal") == 0);

	Employee w(v);
	w = u;
}
#include "CPU.h"

int main() {
	CPU mycpu;
	Keyboard qwertykbd;
	mycpu.AttachKeyboard(&qwertykbd);
	mycpu.DetachKeyboard();
}

/*
- Note:
  - class CPU and class Motherboard instances are associated via composition relationship.
  - class CPU and class Keyboard instances are associated via aggregation relationship.
  - The size of CPU is influenced by the sizes of its members.
  - Specifically in composition relation, constructor of part(s) is executed first and then of assembly.
    Destructor order is always opposite of constructor order.
	Hence before releasing assembly object destructor of assembly is executed first and then of part(s).
  - Private member(s) of part cannot be accessed directly in assembly.
  - Aggregation and composition relations are called as 'Has-a' or 'Whole-Part' relation.
*/

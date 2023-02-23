#include <stdexcept>
#include <iostream>
using namespace std;

#include "CPU.h"

CPU::CPU(Keyboard &obj) : m_keyboard(obj) {
	cout << "From CPU Constructor" << endl;
}

CPU::~CPU() {
	cout << "From CPU Destructor" << endl;

}

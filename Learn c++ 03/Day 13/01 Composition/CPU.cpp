#include <iostream>
using namespace std;

#include "CPU.h"

CPU::CPU() : m_drive('C')
{
	cout << "From CPU constructor" << endl;
}

CPU::~CPU()
{
	cout << "From CPU destructor" << endl;
}
#include <iostream>
#include <stdexcept>
using namespace std;

#include "CPU.h"

CPU::CPU() : m_pkeyboard(nullptr) {
	cout << "From CPU constructor" << endl;
	//m_motherboard.m_noofprocessor = 4; // private member(s) of part cannot be accessed
}

CPU::~CPU() {
	cout << "From CPU destructor" << endl;
}

void CPU::AttachKeyboard(Keyboard* pkeyboard) {
	if (pkeyboard == nullptr)
		throw invalid_argument("Keyboard object is required.");
	m_pkeyboard = pkeyboard;
}

void CPU::DetachKeyboard() {
	m_pkeyboard = nullptr;
} 
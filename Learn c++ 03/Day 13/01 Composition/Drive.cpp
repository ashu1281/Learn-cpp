#include <iostream>
using namespace std;

#include "Drive.h"

Drive::Drive(char driveletter): m_driveletter(driveletter)
{
	cout << "From Drive constructor" << endl;
}

Drive::~Drive()
{
	cout << "From Drive destructor" << endl;
}
#include "Person.h"
#include <assert.h>
#include <stdexcept>
#include <cstring>


int Person::m_maxAge = 120;

Person::Person(const char* pname, int age){ 
	SetName(pname);
	SetAge(age);

}

Person::Person(const Person& obj){
	SetName(obj.m_pname);
	SetAge(obj.m_age);
}

Person::~Person() {
	
	delete[] m_pname;
	m_pname = nullptr;
	

}


int Person::GetAge() const {
	assert(m_age > 0 && m_age<m_maxAge);
	return m_age;
}

const char* Person::GetName() const {
	assert(m_pname != nullptr);
	return m_pname;

}

void Person::SetAge(int age) {
	if (age <= 0 || age > m_maxAge)
		throw std::invalid_argument("Age is not valid.");
	
	m_age = age;
}

void Person::SetName(const char* pname) {
	if (pname == nullptr)
		throw std::invalid_argument("Name is not valid.");

	int len = strlen(pname);
	m_pname = new char[len + 1];

	strcpy_s(m_pname, len + 1, pname);



}

Person& Person::operator=(const Person& obj) {
		if (this != &obj) {
			SetName(obj.m_pname);
			SetAge(obj.m_age);
		}
	return *this;
}
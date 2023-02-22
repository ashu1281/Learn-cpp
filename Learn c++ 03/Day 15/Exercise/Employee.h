#pragma once
#pragma once

class Person {
public:
	Person();
	Person(const char* pname, int age);
	Person(const Person& obj);
	~Person();
public:
	int GetAge() const;
	const char* GetName() const;
	void SetAge(int age); // age > 0 and age < m_maxAge
	void SetName(const char* pname); // pname != nullptr
private:
	char* m_pname;
	int m_age;

public:
	Person& operator=(const Person& obj);

private:
	static int m_maxAge;


};


class Employee : public Person {

public:
	Employee(const char* pname, int age, const char* pdepartment);
	~Employee();

public:
	const char* GetDepartment() const;
	void SetDepartment(const char* pdepartment);

private:
	char* m_department;
};
#pragma once

class Integer {
public:
	Integer(int i = 0);
	Integer(const Integer& obj);
	~Integer();
public:
	int Get() const;
	void Set(int i);
public:
	Integer& operator=(const Integer& obj);//assignment operator

private:
	int* m_pi;
};

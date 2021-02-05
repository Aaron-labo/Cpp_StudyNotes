#pragma once
#include <iostream>
class Mystring
{
public:
	Mystring(const char* s = NULL);
	Mystring& operator=(const Mystring& another);
	Mystring operator+(const Mystring& another);
	Mystring(const Mystring& s);
	~Mystring();
	void c_str();
private:
	char* _str;
};


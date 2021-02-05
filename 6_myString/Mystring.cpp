#pragma warning(disable:4996)
#include "Mystring.h"
#include <string.h>
using namespace std;

Mystring::Mystring(const char* s) {
	if (s == NULL) {
		_str = new char;
		*_str = '\0';
	}
	else {
		int len = strlen(s);
		_str = new char[len + 1];
		strcpy(_str, s);
	}
}

Mystring::~Mystring()
{
	delete[]_str;
}

Mystring::Mystring(const Mystring& another)
{
	int len = strlen(another._str);
	_str = new char[len + 1];
	strcpy(_str, another._str);
}

Mystring& Mystring::operator=(const Mystring& another)
{
	if (this == &another) {
		return *this;
	}
	delete[]this->_str;
	int len = strlen(another._str);
	this->_str = new char[len + 1];
	strcpy(this->_str, another._str);
	return *this;
}

Mystring Mystring::operator+(const Mystring& another)
{
	Mystring tmp;
	delete[]tmp._str;
	int len = strlen(this->_str);
	len += strlen(another._str);

	tmp._str = new char[len + 1];
	memset(tmp._str, 0, len + 1);
	strcat(tmp._str, this->_str);
	strcat(tmp._str, another._str);
	
	return tmp;
}

void Mystring::c_str()
{
	cout << this->_str << endl;
}

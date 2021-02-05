#include <iostream>
#include <string>
#include <string.h>
#include "Mystring.h"
using namespace std;

int main()
{
	string s;
	string s2("abcdefg");
	cout << s << s2 << endl;

	Mystring ms;
	Mystring ms2("china");
	cout << s << s2 << endl;

	Mystring x = "aaa", y = "bbb";
	Mystring z = x + y;
	z.c_str();

	return 0;
}
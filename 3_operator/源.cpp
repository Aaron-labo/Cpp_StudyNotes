#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{
	int x(1), y(2), z(3);
	
	(x += y) += z;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	cout << "--------------------" << endl;

	Complex a, b, c;
	cout << "请分别输入a， b， c 的值：";
	cin >> a >> b >> c;

	(a += b) += c;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}
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
	cout << "��ֱ�����a�� b�� c ��ֵ��";
	cin >> a >> b >> c;

	(a += b) += c;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}
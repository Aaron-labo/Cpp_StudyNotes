#include "SalesMan.h"

SalesMan::SalesMan()
{
}

void SalesMan::init()
{
	cout << "����������Ա��������";
	cin >> _name;
	cout << "������������Ա���µ����۶";
	cin >> monthSaleAmount;
	rate = 0.04;
}

void SalesMan::calcSalary()
{
	_salary = monthSaleAmount * rate;
}

void SalesMan::disInfo()
{
	cout << "������" << _name << endl;
	cout << "���ţ�" << _num << endl;
	cout << "����" << _grade << endl;
	cout << "нˮ��" << _salary << endl;
}

void SalesMan::promote()
{
	_grade = 1;
}

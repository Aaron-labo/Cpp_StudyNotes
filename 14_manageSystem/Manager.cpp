#include "Manager.h"

Manager::Manager()
{
}

void Manager::init()
{
	cout << "�����뾭���������";
	cin >> _name;
	staticSalary = 8000;
}

void Manager::addSalary(int addAmount)
{
	_salary += addAmount;
}

void Manager::calcSalary()
{
	_salary = staticSalary;
}

void Manager::disInfo()
{
	cout << "������" << _name << endl;
	cout << "���ţ�" << _num << endl;
	cout << "����" << _grade << endl;
	cout << "нˮ��" << _salary << endl;
}

void Manager::promote()
{
	_grade = 4;
}

#include "Technician.h"

Technician::Technician()
{
}

void Technician::init()
{
	cout << "�����뼼����Ա��������";
	cin >> _name;
	cout << "�����뼼����Ա�Ĺ�ʱ��";
	cin >> hourAount;
	moneyPerhour = 100;
}

void Technician::calcSalary()
{
	_salary = hourAount * moneyPerhour;
}

void Technician::disInfo()
{
	cout << "������" << _name << endl;
	cout << "���ţ�" << _num << endl;
	cout << "����" << _grade << endl;
	cout << "нˮ��" << _salary << endl;
}

void Technician::promote()
{
	_grade = 3;
}

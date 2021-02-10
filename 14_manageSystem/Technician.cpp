#include "Technician.h"

Technician::Technician()
{
}

void Technician::init()
{
	cout << "请输入技术人员的姓名：";
	cin >> _name;
	cout << "请输入技术人员的工时：";
	cin >> hourAount;
	moneyPerhour = 100;
}

void Technician::calcSalary()
{
	_salary = hourAount * moneyPerhour;
}

void Technician::disInfo()
{
	cout << "姓名：" << _name << endl;
	cout << "工号：" << _num << endl;
	cout << "级别：" << _grade << endl;
	cout << "薪水：" << _salary << endl;
}

void Technician::promote()
{
	_grade = 3;
}

#include "Manager.h"

Manager::Manager()
{
}

void Manager::init()
{
	cout << "请输入经理的姓名：";
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
	cout << "姓名：" << _name << endl;
	cout << "工号：" << _num << endl;
	cout << "级别：" << _grade << endl;
	cout << "薪水：" << _salary << endl;
}

void Manager::promote()
{
	_grade = 4;
}

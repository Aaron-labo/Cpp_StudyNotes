#include "SaleManager.h"

SaleManager::SaleManager()
{
}

void SaleManager::init()
{
	cout << "请输入销售经理的姓名：";
	cin >> _name;
	cout << "请输入销售人员当月的销售额：";
	cin >> monthSaleAmount;
	staticSalary = 5000;
	rate = 0.05;
}

void SaleManager::calcSalary()
{
	_salary = staticSalary + monthSaleAmount * rate;
}

void SaleManager::disInfo()
{
	cout << "姓名：" << _name << endl;
	cout << "工号：" << _num << endl;
	cout << "级别：" << _grade << endl;
	cout << "薪水：" << _salary << endl;
}

void SaleManager::promote()
{
	_grade = 3;
}

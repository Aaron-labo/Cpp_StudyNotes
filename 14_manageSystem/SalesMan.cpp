#include "SalesMan.h"

SalesMan::SalesMan()
{
}

void SalesMan::init()
{
	cout << "请输入销售员的姓名：";
	cin >> _name;
	cout << "请输入销售人员当月的销售额：";
	cin >> monthSaleAmount;
	rate = 0.04;
}

void SalesMan::calcSalary()
{
	_salary = monthSaleAmount * rate;
}

void SalesMan::disInfo()
{
	cout << "姓名：" << _name << endl;
	cout << "工号：" << _num << endl;
	cout << "级别：" << _grade << endl;
	cout << "薪水：" << _salary << endl;
}

void SalesMan::promote()
{
	_grade = 1;
}

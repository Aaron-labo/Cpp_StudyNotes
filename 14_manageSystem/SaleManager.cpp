#include "SaleManager.h"

SaleManager::SaleManager()
{
}

void SaleManager::init()
{
	cout << "���������۾����������";
	cin >> _name;
	cout << "������������Ա���µ����۶";
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
	cout << "������" << _name << endl;
	cout << "���ţ�" << _num << endl;
	cout << "����" << _grade << endl;
	cout << "нˮ��" << _salary << endl;
}

void SaleManager::promote()
{
	_grade = 3;
}

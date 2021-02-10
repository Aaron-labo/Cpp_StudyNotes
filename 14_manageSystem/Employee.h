#pragma once
#include <iostream>
using namespace std;

class Employee
{
public:
	Employee();
	virtual void init() = 0;
	virtual void calcSalary() = 0;
	virtual void disInfo() = 0;
	virtual void promote() = 0;
	virtual ~Employee();
protected:
	string _name;
	int _num;
	int _grade;
	float _salary;
	static int _startNum;
};


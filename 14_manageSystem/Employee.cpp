#include "Employee.h"

Employee::Employee()
{
	_num = _startNum++;
	_grade = 1;
}

Employee::~Employee()
{
}

int Employee::_startNum = 1000;
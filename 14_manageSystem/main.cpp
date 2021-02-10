#include "Technician.h"
#include "SaleManager.h"
#include <typeinfo>

int main()
{
	//Technician tech1;

	//tech1.calcSalary();
	//tech1.promote();
	//tech1.disInfo();

	//cout << "------------------" << endl;

	//Manager man;
	//
	//man.calcSalary();
	//man.promote();
	//man.disInfo();

	//cout << "------------------" << endl;

	//SalesMan sm;

	//sm.calcSalary();
	//sm.promote();
	//sm.disInfo();

	//cout << "------------------" << endl;

	//SaleManager smg;

	//smg.calcSalary();
	//smg.promote();
	//smg.disInfo();

	Employee* emp[] = { new Technician, new Manager, new SalesMan, new SaleManager };
	for (size_t i = 0; i < sizeof(emp) / sizeof(emp[0]); i++){
		cout << "\n------------------\n" << endl;
		emp[i]->init();
		if (typeid(*emp[i]) == typeid(Manager)) {
			Manager* t = dynamic_cast<Manager*>(emp[i]);
			t->addSalary(30000);
		}
		emp[i]->calcSalary();
		emp[i]->promote();
		emp[i]->disInfo();
		if (i == sizeof(emp) / sizeof(emp[0]) - 1){
			cout << "\n------------------\n" << endl;
		}

		for (int i = 0; i < 4; i++) {
			delete emp[i];
		}
	}

	return 0;
}
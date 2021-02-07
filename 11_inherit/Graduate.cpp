#include "Graduate.h"

Graduate::Graduate(string nn, int aa, float ss, double ds)
	:Student(nn, aa, ss), salary(ds)
{
}

void Graduate::print()
{
	dis();
	cout << "salary:" << salary << endl;
}

#include "Doctor.h"

int main()
{
	Student s("����", 32, 120);
	s.dis();

	cout << "--------------------" << endl;

	Graduate g("����", 35, 122, 3500);
	g.print();

	cout << "--------------------" << endl;

	Doctor d("����", 40, 150, 20000, "Doctor Wang");
	d.dump();

	return 0;
}
#include "Doctor.h"

int main()
{
	Student s("张三", 32, 120);
	s.dis();

	cout << "--------------------" << endl;

	Graduate g("李四", 35, 122, 3500);
	g.print();

	cout << "--------------------" << endl;

	Doctor d("王五", 40, 150, 20000, "Doctor Wang");
	d.dump();

	return 0;
}
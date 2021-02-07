#include "Doctor.h"

Doctor::Doctor(string nn, int aa, int ss, int ds, string tt)
	:Graduate(nn, aa, ss, ds), title(tt)
{
}

void Doctor::dump()
{
	print();
	cout << "title:" << title << endl;
}

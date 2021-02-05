#include "Widget.h"
#include <iostream>
using namespace std;

Widget::Widget()
{
	pa[0] = &Widget::f;
	pa[1] = &Widget::g;
	pa[2] = &Widget::h;
	pa[3] = &Widget::i;
}

void Widget::select(int idx)
{
	(this->*pa[idx])();
}


void Widget::f(){cout << "void f()" << endl;}
void Widget::g(){cout << "void g()" << endl;}
void Widget::h(){cout << "void h()" << endl;}
void Widget::i(){cout << "void i()" << endl;}
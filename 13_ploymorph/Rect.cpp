#include "Rect.h"

Rect::Rect(int xx, int yy, int ww, int hh)
	:Shape(xx, yy), w(ww), h(hh)
{
}

void Rect::show()
{
	cout << "this is rectangle" << endl;
}

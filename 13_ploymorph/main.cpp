#include "Circle.h"
#include "Rect.h"

int main()
{
	Circle c(1, 2, 3);
	Rect r(10, 20, 30, 40);
	Shape s(1, 2);
	s.show();
	int input;
	while (1) {
		cin >> input;
		switch (input)
		{
		case 1:
			s = &c;;
			s->show();
			break;
		case 2:
			s = &r;;
			s->show();
			break;
		}
	}


	return 0;
}
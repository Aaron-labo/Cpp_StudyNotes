#include <iostream>
#include "CCSprite.h"
using namespace std;

int main()
{
	CCSprite a(1), b(2), c(3);

	for (int i = 100; i < 106; i++) {
		new CCSprite(i);
	}
	CCSprite::traverseCCSprite();

	return 0;
}
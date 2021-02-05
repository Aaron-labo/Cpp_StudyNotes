#include "CCSprite.h"
#include <iostream>
using namespace std;

CCSprite::CCSprite(int d)
{
	data = d;
	this->next = head;
	head = this;
}

void CCSprite::traverseCCSprite()
{
	CCSprite* ph = head;
	while (ph != NULL) {
		cout << ph->data << endl;
		ph = ph->next;
	}
}
CCSprite* CCSprite::head = NULL;


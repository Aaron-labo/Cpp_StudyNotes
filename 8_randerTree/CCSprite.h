#include <iostream>
class CCSprite
{
public:
	CCSprite(int d);
	static void traverseCCSprite();
private:
	int data;
	CCSprite* next;
	static CCSprite* head;
};

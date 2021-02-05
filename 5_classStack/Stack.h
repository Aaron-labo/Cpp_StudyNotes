#pragma once
class Stack
{
public:
	void init();
	bool isEmpty();
	bool isFull();
	char pop();
	void push(char c);
private:
	char space[1024];
	int top;
};


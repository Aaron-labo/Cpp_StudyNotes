#include<iostream>
#include<string.h>
#include<stdlib.h>
#include"Stack.h"
using namespace std;

void Stack::init() {
	top = 0;
	memset(space, 0, 1024);
}

bool Stack::isEmpty() {
	return top == 0;
}


bool Stack::isFull() {
	return top == 1024;
}

char Stack::pop() {
	return space[--top];
}

void Stack::push(char c) {
	space[top++] = c;
}
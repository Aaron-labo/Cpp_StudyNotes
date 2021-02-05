#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<time.h>
using namespace std;

void weatherCase(string weather = "sunny")
{
	time_t t = time(0);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y-%m-%d %X %A ", localtime(&t));
	cout << tmp << "today is weather " << weather << endl;
}

int main()
{
	weatherCase();
	weatherCase();
	weatherCase();
	weatherCase();
	weatherCase("rainy");

	return 0;
}
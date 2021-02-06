#include<iostream>
#include<stdlib.h>
using namespace std;

class A {
public:
	void show() const
	{
		cout << val << endl;
		print();
	}

	void print() const {
		cout << x << y << endl;
	}

private:
	const int val;
	int x, y;
};

int main()
{
	cout << "this is a class" << endl;

	return 0;
}
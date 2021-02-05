#include<iostream>
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
	

	return 0;
}
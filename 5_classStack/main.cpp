#include<iostream>
#include"Stack.h"
using namespace std;

int main()
{
	Stack st;
	st.init();

	for (char v = 'a'; !st.isFull() && v != 'z' + 1; v++) {
		st.push(v);
	}

	while (!st.isEmpty()) {
		cout << st.pop() << endl;
	}

	return 0;
}
#include<iostream>
#include<Windows.h>
#include<iomanip>
using namespace std;

int main()
{
	int hour = 0, minite = 0, second = 0;
	cout << "请输入时间：" << endl;
	cin >> hour >> minite >> second;
	for (; second >= 0; second--) {
		system("cls");
		cout << "当前时间还剩：" << setfill('0') << setw(2) << hour << ':' << 
			setfill('0') << setw(2) << minite << ':' << 
			setfill('0') << setw(2) << second <<endl;
		if (hour == 0 && minite == 0 && second == 0) {
			cout << "倒计数结束！" << endl;
			break;
		}
		Sleep(1000);
	}

	return 0;
}
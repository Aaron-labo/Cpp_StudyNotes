#include <iostream>
#include "Sender.h"
#include "Mail.h"

using namespace std;

Sender::Sender(string addr)
	:_addr(addr){}

Sender& Sender::operator<<(Mail& mail)
{
	cout << "���͵�ַ��" << _addr << endl;
	cout << "���⣺" << mail._title << endl;
	cout << "�ż����ݣ�" << mail._contents << endl;
	cout << "����ʱ�䣺" << mail._time << endl;

	return *this;
}
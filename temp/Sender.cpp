#include <iostream>
#include "Sender.h"
#include "Mail.h"

using namespace std;

Sender::Sender(string addr)
	:_addr(addr){}

Sender& Sender::operator<<(Mail& mail)
{
	cout << "发送地址：" << _addr << endl;
	cout << "标题：" << mail._title << endl;
	cout << "信件内容：" << mail._contents << endl;
	cout << "发送时间：" << mail._time << endl;

	return *this;
}
#include <iostream>
#include <string>

using namespace std;

class Mail;

class Sender
{
public:
	Sender(string addr)
		:_addr(addr) {}
	Sender& operator<<(Mail& mail);
private:
	string _addr;
};

class Mail
{
public:
	Mail(string title, string contents, string t)
		:_title(title), _contents(contents), _time(t) {}
	friend Sender& Sender::operator<<(Mail& mail);
private:
	string _title;
	string _contents;
	string _time;
};

Sender& Sender::operator<<(Mail& mail)
{
	cout << "发送地址：" << _addr << endl;
	cout << "标题：" << mail._title << endl;
	cout << "信件内容：" << mail._contents << endl;
	cout << "发送时间：" << mail._time << endl;

	return *this;
}

int main()
{
	Sender sender("wxy1294685672@gmail.com");
	Mail mail1("开学", "本学期开学报到时间为2月27日", "2020.2.6"),
		mail2("开学", "本学期开学报到时间为2月28日", "2020.2.7");
	sender << mail1 << mail2;

	return 0;

}
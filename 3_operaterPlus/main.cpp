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
	cout << "���͵�ַ��" << _addr << endl;
	cout << "���⣺" << mail._title << endl;
	cout << "�ż����ݣ�" << mail._contents << endl;
	cout << "����ʱ�䣺" << mail._time << endl;

	return *this;
}

int main()
{
	Sender sender("wxy1294685672@gmail.com");
	Mail mail1("��ѧ", "��ѧ�ڿ�ѧ����ʱ��Ϊ2��27��", "2020.2.6"),
		mail2("��ѧ", "��ѧ�ڿ�ѧ����ʱ��Ϊ2��28��", "2020.2.7");
	sender << mail1 << mail2;

	return 0;

}
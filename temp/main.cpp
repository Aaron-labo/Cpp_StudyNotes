#include "Mail.h"
#include "Sender.h"

using namespace std;

int main()
{
	Sender sender("wxy1294685672@gmail.com");
	Mail mail1("��ѧ", "��ѧ�ڿ�ѧ����ʱ��Ϊ2��27��", "2020.2.6"),
		mail2("��ѧ", "��ѧ�ڿ�ѧ����ʱ��Ϊ2��28��", "2020.2.7");
	sender << mail1 << mail2;

	return 0;

}
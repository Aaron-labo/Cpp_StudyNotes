#include "Mail.h"
#include "Sender.h"

using namespace std;

int main()
{
	Sender sender("wxy1294685672@gmail.com");
	Mail mail1("开学", "本学期开学报到时间为2月27日", "2020.2.6"),
		mail2("开学", "本学期开学报到时间为2月28日", "2020.2.7");
	sender << mail1 << mail2;

	return 0;

}
#pragma once
#include <string>
#include "Sender.h"

using namespace std;

class Mail
{
public:
	Mail(string title, string contents, string t);
	friend Sender& Sender::operator<<(Mail& mail);
private:
	string _title;
	string _contents;
	string _time;
};


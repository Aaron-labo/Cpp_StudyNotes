#pragma once
#include <string>

using namespace std;

class Mail;
class Sender
{
public:
	Sender(string addr);
	Sender& operator<<(Mail& mail);
private:
	string _addr;
};


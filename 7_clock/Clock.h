#pragma once
class Clock
{
public:
	Clock();
	void run();
	void show();
private:
	int hour;
	int min;
	int sec;
};


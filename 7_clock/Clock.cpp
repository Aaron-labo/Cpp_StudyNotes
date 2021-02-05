#pragma warning(disable:4996)
#include "Clock.h"
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
using namespace std;

Clock::Clock()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	hour = ltm->tm_hour;
	min = ltm->tm_min;
	sec = ltm->tm_sec;
}

void Clock::show()
{
	system("cls");
	cout << setw(2) << setfill('0') << hour << ':';
	cout << setw(2) << setfill('0') << min << ':';
	cout << setw(2) << setfill('0') << sec;
}

void Clock::run()
{
	while (true) {
		show();
		Sleep(1000);
		if (++sec == 60) {
			sec = 0;
			min++;
			if (min == 60) {
				min = 0;
				hour++;
				if (hour == 24) {
					hour = 0;
				}
			}
		}
		if (_kbhit() && _getch() == 'q') {
			break;
		}
	}
}
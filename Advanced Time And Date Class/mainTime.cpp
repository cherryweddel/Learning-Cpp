#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
#include "Date.h"
#include <ctime>
using namespace std;

Time::Time(int hour, int minute, int second)
{
	setTime(hour, minute, second);
}

void Time::setTime(int h,int m, int s)
{
	
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if (h >= 0 && h < 24)
		hour = h;
	else
		throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m)
{
	if (m >= 0 && m < 60)
		minute = m;
	else
		throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s)
{
	if (s >= 0 && s < 60)
		second = s;
	else
		throw invalid_argument("Second must be 0-59");
}

unsigned int Time::getHour() const
{
	return hour;
}

unsigned int Time::getMinute() const
{
	return minute;
}

unsigned int Time::getSecond() const
{
	return second;
}

void Time::printUniversal() const
{
	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard() const
{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
}

void Time::tick(Date date)
{
	second++;
	if (second == 60)
	{
		minute++;
		second = 0;
		if (minute == 60)
		{
			hour++;
			minute = 0;
			if (hour == 24)
			{
				hour = 0;
				date.nextDay();
			}
		}
	}
}
#include <iostream>
#include "Date.h"
#include <array>
using namespace std;

Date::Date(int m, int d, int y)
	:month(m), day(d), year(y)
{
}

void Date::print()
{
	cout << month << '/' << day << '/' << year;
}

void Date::nextDay()
{
	day++;
	static const array<int, monthsPerYear+1> daysPerMonth =
	{0,31,28,31,30,31,30,31,31,30,31,30,31};

	if (day > daysPerMonth[month]&&month!=2)
	{
		month++;
		day = 1;
		if (month == 13)
		{
			year++;
			month = 1;
		}
	}

	if (month == 2)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		{
			if (day > 29)
			{
				month++;
				day = 1;
			}
		}
		else
		{
			if (day > 28)
			{
				month++;
				day = 1;
			}
		}
	}
}
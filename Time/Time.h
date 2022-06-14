#pragma once
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
	int hour, minute, second;
	int year, month, day;
public:
	Time(int h);
	Time();
	int getYear();
	int getMonth();
	int getDay();
	int getHour();
	int getMinute();
	int getSecond();
	void printTime();
	void validCheck();

};


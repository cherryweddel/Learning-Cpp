#include "Time.h"

const static int daysPerMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

Time::Time(int h)
{
    time_t t;
    t = time(NULL);
    tm* pt = gmtime(&t);
    day = pt->tm_mday;
    month = pt->tm_mon + 1;
    year = pt->tm_year + 1900;
    hour = pt->tm_hour + h;
    minute = pt->tm_min;
    second = pt->tm_sec;

    validCheck();
}

Time::Time()
{
    year = 1900;
    month = 2;
    day = 29;
    hour = 23;
    minute = 10;
    second = 10;

    validCheck();
}

int Time::getYear()
{
    return year;
}

int Time::getMonth()
{
    return month;
}

int Time::getDay()
{
    return day;
}

int Time::getHour()
{
    return hour;
}

int Time::getMinute()
{
    return minute;
}

int Time::getSecond()
{
    return second;
}

void Time::printTime()
{
    cout << year << "-" << month << "-" << day << " " << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}

void Time::validCheck()
{
    if (hour >= 24)
    {
        hour -= 24;
        day++;
        if (day > daysPerMonth[month] && month != 2)
        {
            month++;
            if (month > 12)
                year++;
            day = 1;
        }
        if (month == 2)
        {
            if (day > 29)
            {
                month++;
                day = 1;
            }
            if (day == 29)
            {
                if (year%4!=0||(year%100==0&&year%400!=0))
                {
                    month++;
                    day = 1;
                }
            }
        }
    }
}

#include <iostream>
#include "Time.h"
#include "Date.h"
#pragma warning(disable : 4996)
using namespace std;

void printS(Time time, Date date)
{
	date.print();
	cout << "  ";
	time.printStandard();
	cout << endl;
}

void printU(Time time, Date date)
{
	date.print();
	cout << "  ";
	time.printUniversal();
	cout << endl;
}

void getTime(int& y, int& m, int& d, int& h, int& mi, int& s)
{
	time_t t;
	t = time(NULL);
	tm* pt = gmtime(&t);
	 d = pt->tm_mday;
	m = pt->tm_mon + 1;
	 y = pt->tm_year + 1900;
	 h = pt->tm_hour + 8;
	 mi = pt->tm_min;
	 s = pt->tm_sec;
	cout << "当前系统时间为：" << y << "年" << m << "月" << d << "日" << h << "时" << mi << "分" << s << "秒" << endl;
}

int main()
{
	int y, m, d;
	int h, mi, s;

	/*cout << "Please enter the date: ";
	cin >> y >> m >> d;
	cout << "Please enter the time: ";
	cin >> h >> mi >> s;*/

	getTime(y, m, d, h, mi, s);

	Date date1(m, d, y);
	Time time1(h, mi, s);

	printS(time1, date1);
	printU(time1, date1);

	date1.nextDay();
	
	printS(time1, date1);
	printU(time1, date1);

	time1.tick(date1);

	printS(time1, date1);
	printU(time1, date1);
	
}



#pragma once
#include <iostream>
using namespace std;
class AccCash
{
protected:
	int money;
	int actPaid=0;
	static int cnt;
public:
	AccCash();
	virtual void accCash();
	virtual void printMoney();
};


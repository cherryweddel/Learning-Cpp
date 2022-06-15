#include "SavingsAccount.h"
#include"Account.h"
#include<iostream>
using namespace std;
SavingsAccount::SavingsAccount(double ba,double ra):Account(ba)
{
	
	setRate(ra);
}
void SavingsAccount::setRate(double r)
{
	if (r >= 0)
	{
		rate = r;
	}
	else
		throw invalid_argument("请输入合法利率值");
}
double SavingsAccount::getRate()
{
	return rate;
}
double SavingsAccount::calculateInterest()
{
	double t=0;
	return t=getBalance() * rate;
}
double SavingsAccount::credit(double t)
{
	double x = t;
	t = SavingsAccount::calculateInterest();
	return balance = getBalance() + t+x;
}
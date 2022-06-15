#include "Account.h"
#include<iostream>
using namespace std;
Account::Account(double ba)
{
	setBalance(ba);
}
void Account::setBalance(double b)
{
	if (b >= 0)
	{
		balance = b;

	}
	else
		throw invalid_argument("”‡∂Ó±ÿ–Î¥Û”⁄¡„");
}
double Account::getBalance()
{
	return balance;
}
double Account::credit(double c)
{
	return balance = balance + c;
}
bool Account::debit(double d)
{
	if (d <= balance)
	{
		balance = balance - d;
		return 1;
	}
	else
	{
		std::cout << "Debit amount exceeded account balance\n";
		return 0;
	}
}


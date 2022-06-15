#pragma once
#include"Account.h"
class CheckingAccount:public Account 
{
private:
	double transactionCost;
public:
	CheckingAccount(double = 0, double = 0);
	void settransactionCost(double);
	double gettransactionCost();
	double credit(double);
	double debit(double);
};


#pragma once
#include"Account.h"
class SavingsAccount :public Account 
{
private:
	double rate;
public:
	SavingsAccount(double = 0, double = 0);
	double calculateInterest();
	void setRate(double);
	double getRate();
	double credit(double);

};


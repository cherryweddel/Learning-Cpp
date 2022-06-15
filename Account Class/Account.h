#pragma once
class Account
{
protected:
	double balance;
public:
	Account(double=0);
	void setBalance(double);
	double getBalance();
	virtual double credit(double);
	bool debit(double);
};


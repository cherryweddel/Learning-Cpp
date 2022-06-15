#include "CheckingAccount.h"
#include"Account.h"
#include<iostream>
using namespace std;
CheckingAccount::CheckingAccount(double ba,double tr):Account(ba)
{
	
	settransactionCost(tr);
}
void CheckingAccount::settransactionCost(double t)
{
	if (t >= 0)
		transactionCost = t;
	else
		throw invalid_argument("��������ȷ�Ľ��׷���");
}
double CheckingAccount::gettransactionCost()
{
	return transactionCost;
}
double CheckingAccount::credit(double c)
{
	return Account::getBalance() + c - transactionCost;
}
double CheckingAccount::debit(double d)
{
	if (Account::debit(d))
	{
		if (getBalance() - d - transactionCost >= 0)
		{
			return getBalance() - d - transactionCost;
		}
		else
			throw invalid_argument("�Բ����������㣡");
	}
	else
	{
		throw invalid_argument("�Բ����������㣡");
	}

}
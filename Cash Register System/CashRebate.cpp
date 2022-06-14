#include "CashRebate.h"

CashRebate::CashRebate()
{
	cout << "Please enter your discount value." << endl;
	cin >> moneyRebate;
}

void CashRebate::accCash()
{
	actPaid = money * moneyRebate;
}

void CashRebate::printMoney()
{
	cout << "Your invoice amount is $" << money << endl;
	cout << "Your money rebate is " << moneyRebate << endl;
	cout << "You actually paid $" << actPaid << endl;
	cnt++;
	cout << cnt << endl;
}

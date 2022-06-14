#include "CashReturn.h"

CashReturn::CashReturn()
{
	cout << "What is the condition?" << endl;
	cin >> moneyCondition;
	cout << "What is the return money?" << endl;
	cin >> moneyReturn;
}

void CashReturn::accCash()
{
	actPaid = money - money / moneyCondition * moneyReturn;
}

void CashReturn::printMoney()
{
	cout << "Your invoice amount is $" << money << endl;
	cout << "The condition money is $" << moneyCondition << endl;
	cout << "The return money is $" << moneyReturn << endl;
	cout << "Your total return money is $" << money / moneyCondition * moneyReturn << endl;
	cout << "You actually paid $" << actPaid << endl;
	cnt++;
	cout << cnt << endl;
}
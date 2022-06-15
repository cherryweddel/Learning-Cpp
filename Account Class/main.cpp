#include<iostream>
#include<vector>
#include"Account.h"
#include"CheckingAccount.h"
#include"SavingsAccount.h"
using namespace std;
void virtualViaPointer(Account* ptr)
{
	cout << "该账户的余额是" << ptr->getBalance() << endl;
}
int main()
{
	SavingsAccount s1(150, 0.02);
	CheckingAccount c1(160, 2);
	vector<Account*>accounts(2);
	accounts[0] = &s1;
	accounts[1] = &c1;
	accounts[0]->credit(30);
	accounts[1]->debit(170);
	for (Account* ptr : accounts)
	{
		virtualViaPointer(ptr);
	}
}
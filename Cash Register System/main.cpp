#include "AccCash.h"
#include "CashRebate.h"
#include "CashReturn.h"

int main()
{
	AccCash a;
	a.accCash();
	a.printMoney();
	CashReturn c;
	c.accCash();
	c.printMoney();
	CashRebate c1;
	c1.accCash();
	c1.printMoney();
	c.printMoney();
}
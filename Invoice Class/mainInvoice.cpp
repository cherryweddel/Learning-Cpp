#include <string>
#include "Invoice.h"
using namespace std;
Invoice::Invoice(string n, string d, int s, int u)
{
	number = n;
	discribe = d;
	sold_quantity = s;
	unit_price = u;
}

void Invoice::setNumber(string n)
{
	number = n;
}

void Invoice::setDiscribe(string d)
{
	discribe = d;
}

void Invoice::setSQ(int s)
{
	sold_quantity = s;
}

void Invoice::setUP(int u)
{
	unit_price = u;
}

string Invoice::getNumber()
{
	return number;
}

string Invoice::getDiscribe()
{
	return discribe;
}

int Invoice::getSQ()
{
	return sold_quantity;
}

int Invoice::getUP()
{
	return unit_price;
}

int Invoice::getInvoiceAmount()
{
	int result;
	result = sold_quantity * unit_price;;
	return result;
}



#include<iostream>
#include<iomanip>
#include"Invoice.h"
using namespace std;

void printMessage(Invoice i1)
{
	cout << setw(4) << right << i1.getNumber() << setw(20) << right << i1.getDiscribe() << setw(16) << right << i1.getSQ() << setw(15) << right << i1.getUP() << setw(15) << right << i1.getInvoiceAmount() << endl;;
}

int main()
{
	Invoice i1("1", "water", 2, 3);

	cout << setw(4) << right << "NO." << setw(20) << right << "Discribe" << setw(16) << right << "Sold Quantity" << setw(15) << right << "Unit Prise" << setw(15) << right << "InvoiceAmount" << endl;
	printMessage(i1);
	i1.setNumber("2");
	i1.setDiscribe("cake");
	i1.setSQ(1);
	i1.setUP(12);
	printMessage(i1);
}
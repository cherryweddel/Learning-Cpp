#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice {
private:
	string number;
	string discribe;
	int sold_quantity;
	int unit_price;
public:
	Invoice(string n, string d, int s, int u);
	void setNumber(string n);
	void setDiscribe(string d);
	void setSQ(int s);
	void setUP(int u);
	string getNumber();
	string getDiscribe();
	int getSQ();
	int getUP();
	int getInvoiceAmount();
};

#endif
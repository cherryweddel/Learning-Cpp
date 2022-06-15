#include "Package.h"
#include<iostream>
using namespace std;
Package::Package(const string& SD,const string&MA, const string& AR,
	const string&RA, const string& TN,double w, double PPG)
{
	Sender = SD;
	mailingAddress = MA;
	Addressee = AR;
	receivingAddress = AR;
	telephoneNumber = TN;
	setWeight(w);
	setpricePerGram(PPG);
}
void Package::setSender(const string& SD)
{
	Sender = SD;
}
string Package::getSender()
{
	return Sender;
}
void Package::setmailingAddress(const string& MA)
{
	mailingAddress = MA;
}
string Package::getmailingAddress()
{
	return mailingAddress;
}
void Package::setAddressee(const string&AR)
{
	Addressee = AR;
}
string Package::getAddressee()
{
	return Addressee;
}
void Package::setreceivingAddress(const string& RA)
{
	receivingAddress = RA;
}
string Package::getreceivingAddress()
{
	return receivingAddress;
}
void Package::settelephoneNumber(const string& TN)
{
	telephoneNumber = TN;
}
string Package::gettelephoneNumber()
{
	return telephoneNumber;
}
void Package::setWeight(double w)
{
	if (w >= 0.0)
		weight = w;
	else
		throw invalid_argument("weight must be>=0.0");
}
double Package::getWeight()
{
	return weight;
}
void Package::setpricePerGram(double PPG)
{
	if (PPG >= 0)
		pricePerGram = PPG;
	else
		throw invalid_argument("pricePerGram must be>=0");
}
double Package::getpricePerGram()
{
	return pricePerGram;
}
double Package::calculateCost()
{
	return Cost = weight * pricePerGram;
}
void Package::print()
{
	cout << "你选用的是Package" << endl;
	cout << "寄件人为：" << Package::getSender() << "寄件地址为：" << Package::getmailingAddress() << endl;
	cout << "收件人为：" << Package::getAddressee() << "收件地址为：" << Package::getreceivingAddress() << endl;
	cout << "收费为：" << Package::calculateCost();
}

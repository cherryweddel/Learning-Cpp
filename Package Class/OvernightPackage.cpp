#include "OvernightPackage.h"
#include<iostream>
using namespace std;
OvernightPackage::OvernightPackage(const string& SD, const string&MA,const string& AR,const string&RA, const string& TN,
	double w, double PPG, double EC) :Package(SD,MA, AR,RA, TN, w, PPG)
{
	setExtraCost(EC);
}
void OvernightPackage::setExtraCost(double EC)
{
	extraPrice = EC;
}
double OvernightPackage::getExtraCost()
{
	return extraPrice;
}
double OvernightPackage::calculateCost()
{
	return Package::getWeight() * (Package::getpricePerGram() + extraPrice);
}
void OvernightPackage::print()
{
	cout << "您选择的服务是OvernightPackage" << endl;
	cout << "寄件人为：" << Package::getSender() << "  " << "寄件地址为：" << Package::getmailingAddress() << endl;
	cout << "收件人为：" << Package::getAddressee() << "  " << "收件地址为：" << Package::getreceivingAddress()<<endl;
	cout << "所需支付的邮费为" << OvernightPackage::calculateCost()<<endl;
}


#include "TwoDayPackage.h"
#include<iostream>
using namespace std;
TwoDayPackage::TwoDayPackage(const string& SD,const string&MA, const string& AR,const string&RA, const string& TN,
	double w, double PPG, double FP):Package(SD,MA,AR,RA,TN,w,PPG)
{
	setflatPostage(FP);
}
void TwoDayPackage::setflatPostage(double FP)
{
	flatPostage = FP;
}
double TwoDayPackage::getflatPostage()
{
	return flatPostage;
}
double TwoDayPackage::calculateCost()
{
	return flatPostage + Package::calculateCost();
}
void TwoDayPackage::print()
{
	cout << "您选择的服务是TwoDayPackage" << endl;
	cout << "寄件人:" << Package::getSender() << " " << "寄件地址为：" << Package::getmailingAddress()<<endl;
	cout << "收件人：" << Package::getAddressee() << "  " << "收件地址为：" << Package::getreceivingAddress() << endl;
	cout << "所需支付的邮费为" << TwoDayPackage::calculateCost()<<endl;
}

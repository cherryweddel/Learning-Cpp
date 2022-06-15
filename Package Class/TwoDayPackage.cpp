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
	cout << "��ѡ��ķ�����TwoDayPackage" << endl;
	cout << "�ļ���:" << Package::getSender() << " " << "�ļ���ַΪ��" << Package::getmailingAddress()<<endl;
	cout << "�ռ��ˣ�" << Package::getAddressee() << "  " << "�ռ���ַΪ��" << Package::getreceivingAddress() << endl;
	cout << "����֧�����ʷ�Ϊ" << TwoDayPackage::calculateCost()<<endl;
}

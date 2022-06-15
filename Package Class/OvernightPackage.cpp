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
	cout << "��ѡ��ķ�����OvernightPackage" << endl;
	cout << "�ļ���Ϊ��" << Package::getSender() << "  " << "�ļ���ַΪ��" << Package::getmailingAddress() << endl;
	cout << "�ռ���Ϊ��" << Package::getAddressee() << "  " << "�ռ���ַΪ��" << Package::getreceivingAddress()<<endl;
	cout << "����֧�����ʷ�Ϊ" << OvernightPackage::calculateCost()<<endl;
}


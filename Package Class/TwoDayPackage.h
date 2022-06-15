#pragma once
#include<string>
#include"Package.h"
class TwoDayPackage:public Package
{
private:
	double flatPostage;
public:
	TwoDayPackage(const std::string&,const std::string&, const std::string&,
		const std::string&,const std::string&,double = 0.0, double = 0.0, double = 0.0);
	void setflatPostage(double);
	double getflatPostage();
	double calculateCost();
	void print();
};


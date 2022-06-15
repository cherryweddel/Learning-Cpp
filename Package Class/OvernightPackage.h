#pragma once
#include<string>
#include"Package.h"
class OvernightPackage :public Package
{
private:
	double extraPrice;
public:
	OvernightPackage(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,
		double = 0.0, double = 0.0, double = 0.0);
	void setExtraCost(double);
	double getExtraCost();
	double calculateCost();
	void print();
};


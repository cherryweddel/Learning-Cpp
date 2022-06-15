#pragma once
#include<string>
class Package
{
private:
	std::string Sender;
	std::string mailingAddress;
	std::string Addressee;
	std::string receivingAddress;
	std::string telephoneNumber;
	double weight;
	double pricePerGram;
	double Cost;
public:
	Package(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,
		double = 0.0, double = 0.0);
	void setSender(const std::string&);
	std::string getSender();
	void setmailingAddress(const std::string&);
	std::string getmailingAddress();
	void setAddressee(const std::string&);
	std::string getAddressee();
	void setreceivingAddress(const std::string&);
	std::string getreceivingAddress();
	void settelephoneNumber(const std::string&);
	std::string gettelephoneNumber();
	void setWeight(double);
	double getWeight();
	void setpricePerGram(double);
	double getpricePerGram();
	virtual double calculateCost();
	virtual void print();
};


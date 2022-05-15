#pragma once
#include<string>
class Animial
{
protected:
	std::string kind;
	std::string name;
public:
	Animial(std::string n = "ÎÞÃû", std::string k = "animial")
	{
		name = n;
		kind = k;
	}
	
	virtual void Sing()const = 0;

	
};


#pragma once
#include<iostream>
#include<string>
#include"Animial.h"
class Dog :public Animial
{public:

	
	virtual void Sing() const override
	{
		std::cout << "����" << kind << name << "��~��~��\n";
	}
	Dog(std::string n = "����") :Animial(n, "С��")
	{

	}
};


#pragma once
#include<iostream>
#include<string>
#include"Animial.h"
class Cat:public Animial
{
public:


	virtual void Sing() const override
	{
		std::cout << "����" << kind << name << "��~��~��\n";
	}
	Cat(std::string n = "����") :Animial(n, "Сè")
	{

	}
};


#pragma once
#include<iostream>
#include<string>
#include"Animial.h"
class Dog :public Animial
{public:

	
	virtual void Sing() const override
	{
		std::cout << "我是" << kind << name << "汪~汪~汪\n";
	}
	Dog(std::string n = "无名") :Animial(n, "小狗")
	{

	}
};


#pragma once
#include<iostream>
#include<string>
#include"Animial.h"
class Cat:public Animial
{
public:


	virtual void Sing() const override
	{
		std::cout << "我是" << kind << name << "喵~喵~喵\n";
	}
	Cat(std::string n = "无名") :Animial(n, "小猫")
	{

	}
};


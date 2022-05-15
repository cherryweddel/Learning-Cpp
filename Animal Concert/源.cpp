#include<iostream>
#include<string>
#include<vector>
#include"Animial.h"
#include"Cat.h"
#include"Dog.h"
using namespace std;
void virtualViapointer(Animial* ptr)
{
	ptr->Sing();
}
int main()
{
	string N = "无名"; string M = "无名"; char number = 'O';
	vector<Animial*>ptr;
	cout << "请填入正确的字母。如果是狗，请填a;如果是猫，请填b。报名结束，请填E。"<<endl;
	while ((number = cin.get()) != 'E')
	{
		switch (number)
		{
		case 'A':
		case'a':
		{
			cout << "请输入你的姓名：";
			cin >> N;
			Animial* t = new Dog(N);
			ptr.push_back(t);
			break;
		}
		case 'B':
		case'b':
		{
			cout << "请输入你的姓名：";
			cin >> M;
			Animial* f = new Cat(M);
			ptr.push_back(f);

			break;
		}
		}
	}
	cout << "演唱会开始————————" << endl;
	for (Animial* animialptr : ptr)
	{
		virtualViapointer(animialptr);
	}


}
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
	string N = "����"; string M = "����"; char number = 'O';
	vector<Animial*>ptr;
	cout << "��������ȷ����ĸ������ǹ�������a;�����è������b����������������E��"<<endl;
	while ((number = cin.get()) != 'E')
	{
		switch (number)
		{
		case 'A':
		case'a':
		{
			cout << "���������������";
			cin >> N;
			Animial* t = new Dog(N);
			ptr.push_back(t);
			break;
		}
		case 'B':
		case'b':
		{
			cout << "���������������";
			cin >> M;
			Animial* f = new Cat(M);
			ptr.push_back(f);

			break;
		}
		}
	}
	cout << "�ݳ��Ὺʼ����������������" << endl;
	for (Animial* animialptr : ptr)
	{
		virtualViapointer(animialptr);
	}


}
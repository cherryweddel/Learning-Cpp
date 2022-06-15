#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>
#include "head.h"
using namespace std;

void generateBoard(char board1[31], char board2[31],int money1,int money2)
{
	cout << " _________________________________________________" << endl;
	cout << "| ";
	for (int i = 16; i <= 24; i++)
		cout << board2[i] << "  | ";
	cout << board2[25] << "  |" << endl;
	cout << "| 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 |" << endl;
	cout << "|_";
	for (int i = 16; i <= 24; i++)
		cout << board1[i] << "__|_";
	cout << board1[25] << "__|" << endl;
	for (int i = 15; i >= 11; i--)
	{
		cout << "|    |                                       |    |" << endl;
		cout << "|" << board2[i] << i << board1[i];
		cout << "|                                       |";
		cout << board1[41 - i] << 41 - i << board2[41 - i] << "|" << endl;
		if(i==11)
			cout << "|____|_______________________________________|____|" << endl;
		else
		    cout << "|____|                                       |____|" << endl;
	}
	cout << "| ";
	for (int i = 10; i >= 2; i--)
		cout << board1[i] << "  | ";
	cout << board1[1] << "  |" << endl;
	cout << "| 10 | 9  | 8  | 7  | 6  | 5  | 4  | 3  | 2  | 1  |" << endl;
	cout << "|_";
	for (int i = 10; i >= 2; i--)
		cout << board2[i] << "__|_";
	cout << board2[1] << "__|" << endl;
	cout << endl;
	cout << "PLAYER INFORMATION:" << endl;
	cout << player1<<":                         "<<player2<<":" << endl;
	cout << "Money:" << money1 << "                        Money:" << money2 << endl;
	cout << "Game instructions:" << endl;
}


int main()
{
	srand(time(0));
	char board1[31];
	char board2[31];//定义棋子字符型数组
	for (int i = 16; i <= 25; i++)
	{
		board1[i] = '_';
	}
	for (int i = 1; i <= 15; i++)
	{
		board1[i] = ' ';
	}
	for (int i = 26; i <= 30; i++)
	{
		board1[i] = ' ';
	}
	for (int i = 11; i <= 30; i++)
	{
		board2[i] = ' ';
	}
	for (int i = 1; i <= 10; i++)
	{
		board2[i] = '_';
	}//初始化

	int number1=1, number2=1;
	int money1 = 3000, money2 = 3000;
	int step;
	int circle=0;
	bool skipFlag1 = false;
	bool skipFlag2 = false;
	bool ifEnd = false;
	int placeKind[31];

	landInitialization(placeKind);

	title();

	cout << "Player1,What's your name?" << endl;
	cin >> player1;
	cout << "Thank you," << player1 << ". You will be the first player to move the chess!" << endl;
	Sleep(1000);
	system("cls");

	title();

	cout << "Player2,What's your name?" << endl;
	cin >> player2;
	cout << "Thank you, " << player2 << "." << endl;
	cout << "Now let's begin!" << endl;
	Sleep(1000);
	system("cls");

	change1(number1, board1);
	change2(number2, board2);
	generateBoard(board1, board2,money1,money2);//初始化显示棋盘

	while (ifEnd == false)
	{
		if (skipFlag1 == false)
		{
			cout << player1 << " Please roll the dice..." << endl;//摇骰子
			system("pause");
			step = 1 + rand() % 6;
			cout << "The result of rolling the dice is " << step << endl;//生成步数
			system("pause");
			system("cls");
			number1 = number1 + step;
			number1 = judgeExceed(number1);//检测是否超过30
			if (number1 == 1)
			{
				money1 += 1000;
			}//经过起点时发钱
			change1(number1, board1);//更新棋盘、序号
			generateBoard(board1, board2, money1, money2);//生成棋盘
			showHint(number1, placeKind[number1]);//要改
			if (placeKind[number1] == 0)
			{
				cout << "You can get $1000 !" << endl;
				money1 += 1000;
			}
			if (placeKind[number1] == 1)
				operation1(money1, number1, placeKind, 1);
			else if (placeKind[number1] == 2)
			{
				cout << "You can get some money from your place!" << endl;
				money1 += money[number1] / 10;
				cout << "Now your money is $" << money1 << endl;
			}
			else if (placeKind[number1] == -2)
				operation2(money1, money2, number1);
			if (placeKind[number1] == 3)
			{
				cout << "You need to pay income tax!" << endl;
				money1 -= money[number1];
				cout << "Now you have $" << money1 << endl;
			}
			if (placeKind[number1] == 4)
				operation4(money1, number1);
			if (placeKind[number1] == 5)
			{
				cout << "YOU HAVE BEEN ARRESTED!STOP A ROUND!" << endl;
				skipFlag1 = true;
			}
			system("pause");
			system("cls");
			generateBoard(board1, board2, money1, money2);
			if (money1 <= 0)
				break;
		}
			
		if (circle == 1)
		{
			skipFlag1 = false;
			circle = 0;
		}
		if (skipFlag2 == true)
		{
			skipFlag2 = false;
			continue;
		}

		if (skipFlag2 == false)
		{
			cout << player2 << " Please roll the dice..." << endl;
			system("pause");
			step = 1 + rand() % 6;
			cout << "The result of rolling the dice is " << step << endl;
			system("pause");
			system("cls");
			number2 = number2 + step;
			number2 = judgeExceed(number2);
			if (number2 == 1)
			{
				money2 += 1000;
			}
			change2(number2, board2);
			generateBoard(board1, board2, money1, money2);
			showHint(number2, placeKind[number2]);//要改
			if (placeKind[number1] == 0)
			{
				cout << "You can get $1000 !" << endl;
				money1 += 1000;
			}
			if (placeKind[number2] == 1)
				operation1(money2, number2, placeKind, 2);
			else if (placeKind[number2] == 2)
				operation2(money2, money1, number2);
			else if (placeKind[number2] == -2)
			{
				cout << "You can get some money from your place!" << endl;
				money2 += money[number2] / 10;
				cout << "Now your money is $" << money2 << endl;
			}
			if (placeKind[number2] == 3)
			{
				cout << "You need to pay income tax!" << endl;
				money2 -= money[number2];
				cout << "Now you have $" << money2 << endl;
			}
			if (placeKind[number2] == 4)
				operation4(money2, number2);
			if (placeKind[number2] == 5)
			{
				cout << "YOU HAVE BEEN ARRESTED!STOP A ROUND!" << endl;
				skipFlag2 = true;
			}
			system("pause");
			system("cls");
			generateBoard(board1, board2, money1, money2);
			if (money2 <= 0)
				break;
		}

		ifEnd = judgeEnd();
		system("cls");
		generateBoard(board1, board2,money1,money2);
		circle += 1;
	}

	if (money1 > money2)
		cout << player1<<" WIN!" << endl;
	if (money1 < money2)
		cout << player2<<" WIN!" << endl;
	if (money1 == money2)
		cout << "The result of this round is a tie." << endl;
	system("pause");
	return 0;
}
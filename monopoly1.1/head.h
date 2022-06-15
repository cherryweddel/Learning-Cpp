#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

const int money[31] = { 0,1000,1600,1400,2000,800,2200,700,1500,2400,0,1600,1700,0,800,900,1000,1100,1200,1000,900,500,2000,2400,0,1000,1500,0,1700,2200 };
string player1, player2;

void title()
{
	cout << "*************************************************" << endl;
	cout << endl;
	cout << "                Play MONOPOLY!" << endl;
	cout << "            Play with your friend!" << endl;
	cout << endl;
	cout << "*************************************************" << endl;
}

bool judgeEnd()
{
	char answer1, answer2;

	cout << "Player 1,do you want to end the game?(y or n)" << endl;
	cin >> answer1;
	while (answer1 != 'y' && answer1 != 'n')
	{
		cout << "YOU ARE WRONG!Please enter again:";
		cin >> answer1;
	}

	cout << "Player 2,do you want to end the game?(y or n)" << endl;
	cin >> answer2;
	while (answer2 != 'y' && answer2 != 'n')
	{
		cout << "YOU ARE WRONG!Please enter again:";
		cin >> answer2;
	}

	if (answer1 == 'y' && answer2 == 'y')
		return true;
	else
		return false;
}

void change1(int number1, char board1[31])
{
	int i;
	board1[number1] = '*';
	for (i = 1; i <= 15; i++)
	{
		if (i != number1 && board1[i] != ' ')
			board1[i] = ' ';
	}
	for (i = 16; i <= 25; i++)
	{
		if (i != number1 && board1[i] != '_')
			board1[i] = '_';
	}
	for (i = 26; i <= 30; i++)
	{
		if (i != number1 && board1[i] != ' ')
			board1[i] = ' ';
	}
}

void change2(int number2, char board2[31])
{
	int i;
	board2[number2] = '@';
	for (i = 1; i <= 10; i++)
	{
		if (i != number2 && board2[i] != '_')
			board2[i] = '_';
	}
	for (i = 11; i <= 30; i++)
	{
		if (i != number2 && board2[i] != ' ')
			board2[i] = ' ';
	}
}

int judgeExceed(int number)
{
	if (number > 30)
	{
		number = number - 30;
		return number;
	}
	else
		return number;
}


void showHint(int number, int kind)
{
	int roadMoney[31];
	int i;

	for (i = 1; i <= 30; i++)
	{
		roadMoney[i] = money[i] / 10;
	}
	string city[31];
	city[1] = "You can get 1000$!";
	city[2] = "You have arrived BEIJING,CHINA!";
	city[3] = "You have arrived SEOUL,SOUTH KOREA!";
	city[4] = "You have arrived PYONGYANG,NORTH KOREA!";
	city[5] = "You have arrived SYDNEY,AUSTRALIA!";
	city[6] = "You have arrived BANGKOK,THAILAND!";
	city[7] = "You have to pay $700 in tax!";
	city[8] = "You have arrived NEW DELHI,INDIA!";
	city[9] = "You have arrived DOHA,QATAR!";
	city[10] = "YOU ARE ARRESTED!Pause for a round!";
	city[11] = "You have arrived ATHENS,GREECE!";
	city[12] = "You have arrived GIBRALTAR!";
	city[13] = "You may have a chance to change your destiny!Please enter a number!";
	city[14] = "You have arrived PARIS,FRANCE";
	city[15] = "You have arrived LODON,BRITAIN!";
	city[16] = "YOU ARE ARRESTED!Pause for a round!";
	city[17] = "You have arrived WARSAW,POLAND!";
	city[18] = "You have arrived MOSCOW,RUSSIA!";
	city[19] = "You have arrived CAIRO,EGYPT!";
	city[20] = "You have arrived RABAT,MOROCCO!";
	city[21] = "You have arrived NAIROBI,KENYA!";
	city[22] = "You have to pay $500 in tax!";
	city[23] = "You have arrived OTTAWA,CANADA!";
	city[24] = "You have arrived NEW YORK,US!";
	city[25] = "YOU ARE ARRESTED!Pause for a round!";
	city[26] = "You have arrived HAVANA,CUBA!";
	city[27] = "You have arrived LIMA,PERU!";
	city[28] = "You may have a chance to change your destiny!Please enter a number!";
	city[29] = "You have arrived TOKYO,JAPAN!";
	city[30] = "You have arrived SHANGHAI,CHINA!";
	
	cout << city[number];
	
	if (kind == 1)
	{
		cout << endl;
		cout << "You can choose to buy the land ownership here for $" << money[number];
	}
	if (kind == 2)
	{
		cout << "Please pay tolls to your opponent!" << endl;
		cout << "YOU NEED TO PAY $" << roadMoney[number] << " to your opponent." << endl;
		system("pause");
	}
	
}

void landInitialization(int placeKind[31])
{
	for (int i = 1; i <= 30; i++)
	{
		if (i == 1)
			placeKind[i] = 0;
		else if (i == 10 || i == 16 || i == 25)
			placeKind[i] = 5;
		else if (i == 13 || i == 28)
			placeKind[i] = 4;
		else if (i == 7 || i == 22)
			placeKind[i] = 3;
		else
			placeKind[i] = 1;
	}
}

void operation1(int &playerMoney, int number, int placeKind[31],int player)
{
	char answer;
	cout << endl;
	cout << "DO YOU WANT TO BUY?(y or n)";
	cin >> answer;
	while (answer != 'y' && answer != 'n')
	{
		cout << "YOU ARE WRONG!Please enter again:";
		cin >> answer;
	}
	if (answer == 'y'&&playerMoney>=money[number])
	{
		playerMoney -= money[number];
		if (player == 1)
		    placeKind[number] = 2;
		if (player == 2)
			placeKind[number] = -2;
	}
	else if (playerMoney < money[number]&& answer == 'y')
		cout << "YOUR MONEY IS NOT ENOUGH!" << endl;
}
//playerMoney按引用传递，number按值传递

void operation2(int& playerMoney1, int& playerMoney2,int number)
{
	playerMoney1 -= money[number] / 10;
	playerMoney2 += money[number] / 10;
}

void operation4(int &playerMoney,int number)
{
	int seed;
	int res;
	int randomMoney;

	cout << "Please enter a number to choose your destiny.(1-99)" << endl;
	cin >> seed;

	while (seed < 1 || seed>99)
	{
		cout << "PLEASE ENTER CORRECT NUMBER!" << endl;
		cin >> seed;
	}

	srand(seed);
	res = 1 + rand() % 4;
	randomMoney = 500 + rand() % 1000;

	if (res == 1)
	{
		cout << "You were FINED $" << randomMoney << endl;
		system("pause");
		playerMoney -= randomMoney;
		cout << "Now you have $" << playerMoney << endl;
		cout << "Thanks for your fine!" << endl;
	}
	if (res == 2)
	{
		cout << "You were invested $" << randomMoney << " by Sequoia Capital!" << endl;
		playerMoney += randomMoney;
		system("pause");
		cout << "Now you have $" << playerMoney << endl;
	}
	if (res == 3)
	{
		cout << "You were invested $" << randomMoney << " by IDG Capital!" << endl;
		playerMoney += randomMoney;
		system("pause");
		cout << "Now you have $" << playerMoney << endl;
	}
	if (res == 4)
	{
		cout << "The artist you sponsor is so famous that your company makes a lot of money!" << endl;
		playerMoney += randomMoney;
		system("pause");
		cout << "Now you have $" << playerMoney << endl;
	}

}

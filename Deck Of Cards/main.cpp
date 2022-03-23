#include "Card.h"
#include "DeckOfCards.h"
#include "PlayerCard.h"
#include <iostream>
using namespace std;
int cardsScore(PlayerCard player1,bool &tongHua,bool &tongShun)
{
    int DuiZi=0;
    int tongHao3=0,tongHao4=0;

	player1.returnCard();//显示牌
	DuiZi=player1.countDuiZi(tongHao3,tongHao4);
	cout << DuiZi<<"  "<<tongHao3<<"  "<<tongHao4<<endl;

	tongHua=player1.tongHua();
	if(tongHua==0)
		cout << "It is not Tong Hua."<<endl;
	else
		cout << "It is Tong Hua."<<endl;

	tongShun=player1.tongShun();
	if(tongShun==0)
		cout << "It is not Tong Shun."<<endl;
	else
		cout << "It is Tong Shun."<<endl;

	int score=player1.gradeCards();
	cout << "The score of player1's cards is "<<score<<endl;

    return score;
}//在最后9.27中这个函数不需要

int main()
{
	DeckOfCards doc;
	PlayerCard player1,computer;
	int count=1;
	int DuiZi=0;
	int tongHao3=0;
	int tongHao4=0;
	bool tongHua1,tongHua2;
	bool tongShun1,tongShun2;

	for(int i=1;i<5;i++)
		doc.shuffle();

	while (count!=6) {
		Card c;
		c = doc.dealCard();//从洗好的牌中拿出来
		player1.setPlayerCard(c);//放到玩家的牌堆中
		c = doc.dealCard();//从洗好的牌中拿出来
		computer.setPlayerCard(c);//放到玩家的牌堆中
		count++;
	}
	count=1;
	
	player1.returnCard();
	int score1=player1.gradeCards();
	int score2=computer.gradeCards();

	cout << endl;

	cout << "Your cards's score is "<<score1<<endl;
	cout << "The computer's score is "<<score2<<endl;

	if(score1<score2)
		cout << "Computer's cards is good!"<<endl;
	if(score1>score2)
		cout << "Player's cards is good!"<<endl;
	if(score1==score2)
		cout << "Both decks are equally good!"<<endl;

	int ans;
	int num;
	
	cout << "Do you wanna change your cards?If you want,how many cards do you wanna change?\n";
	cout << "If you dont wanna change, please input 0.If you wanna change tell me how many cards do you wanna change(1~3)."<<endl;
	cin >> ans;
	
	while(ans<0||ans>3)
	{
		cout << "Please enter a right number!"<<endl;
		cin >> ans;
	}
	if(ans!=0)
	{
		for (int i=1;i<=ans;i++)
		{
			cout << "Which one do you wanna change?"<<endl;
			cin >>num;
			player1.changeCard(doc,num);
		}
		player1.returnCard();
		score1=player1.gradeCards();
		cout << "Now your cards's score is "<<score1<<endl;
	}
	if(score1<score2)
		cout << "Computer win!"<<endl;
	if(score1>score2)
		cout << "Player win!"<<endl;
	if(score1==score2)
		cout << "Both decks are equally good!"<<endl;
}

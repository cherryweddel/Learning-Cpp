#include "Card.h"
#include "DeckOfCards.h"
#include "PlayerCard.h"
#include <iostream>

int main()
{
	DeckOfCards doc;
	PlayerCard pc;
	int count=1;
	int DuiZi=0;
	int tongHao3=0;
	int tongHao4=0;
	bool tongHua;
	bool tongShun;

	for(int i=1;i<5;i++)
		doc.shuffle();

	while (count!=6) {
		Card c;
		c = doc.dealCard();//从洗好的牌中拿出来
		pc.setPlayerCard(c);//放到玩家的牌堆中
		count++;
	}

	pc.returnCard();//显示牌
	DuiZi=pc.countDuiZi(tongHao3,tongHao4);
	cout << DuiZi<<"  "<<tongHao3<<"  "<<tongHao4<<endl;

	tongHua=pc.tongHua();
	if(tongHua==0)
		cout << "It is not Tong Hua."<<endl;
	else
		cout << "It is Tong Hua."<<endl;

	tongShun=pc.tongShun();
	if(tongShun==0)
		cout << "It is not Tong Shun."<<endl;
	else
		cout << "It is Tong Shun."<<endl;
}


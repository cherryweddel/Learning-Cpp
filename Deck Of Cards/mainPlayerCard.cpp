#include "PlayerCard.h"
#include "Card.h"
#include "DeckOfCards.h"
#include <iomanip>
#include <iostream>
#include<algorithm>
#include "PublicFunction.h"
using namespace std;
void PlayerCard::setPlayerCard(Card c)
{
	playerCards.push_back(c);
}

void PlayerCard::returnCard()
{
	unsigned int num = playerCards.size() ;
	
	for (int i = 0; i < num; i++)
	{
		string s;
		s = playerCards[i].toString();
		cout << setw(20) << left << s;
	}
}

bool PlayerCard::moreCards()
{
	unsigned int n;
	n = playerCards.size();
	if (n == 0)
		return 0;
	else
		return 1;
}

int PlayerCard::countDuiZi(int &tongHao3,int &tongHao4)
{
	vector<int> faceOfCards;
	for(int i=0;i<playerCards.size();i++)
	{
		faceOfCards.push_back(playerCards[i].getFace());
	}

	sort(faceOfCards.begin(),faceOfCards.end());

	
	int duiZi=0;

	int tmp;
	tmp = 0;
	while(tmp<faceOfCards.size()&&tmp>=0)
	{
		
		if(faceOfCards[tmp+3]==faceOfCards[tmp]&&faceOfCards[tmp+2]==faceOfCards[tmp])
		{
			tongHao4++;
			tmp+=4;
			
		}
		else if(faceOfCards[tmp+2]==faceOfCards[tmp]&&faceOfCards[tmp+1]==faceOfCards[tmp])
		{
			tongHao3++;
			tmp+=3;
			continue;
		}
		else if(faceOfCards[tmp+1]==faceOfCards[tmp])
		{
			duiZi++;
			tmp+=2;
			continue;
		}
		else
			tmp+=1;
	}
	return duiZi;
}

bool PlayerCard::tongHua()
{
	vector<int> suitOfCards;
	for(int i=0;i<playerCards.size();i++)
	{
		suitOfCards.push_back(playerCards[i].getSuit());
	}
	int tmp=0;
	sort(suitOfCards.begin(),suitOfCards.end());
	while(tmp<=suitOfCards.size()&&tmp>=0)
	{
		if(suitOfCards[tmp]==suitOfCards[tmp+4])
		{
			break;
			return true;
		}
		else 
			tmp++;
	}
	return false;
}

bool PlayerCard::tongShun()
{
	vector<int> faceOfCards;
	for(int i=0;i<playerCards.size();i++)
	{
		faceOfCards.push_back(playerCards[i].getFace());
	}
	sort(faceOfCards.begin(),faceOfCards.end());
	RemoveRepeat(faceOfCards);

	int tmp1=0;
	int tmp2=1;
	int tmp3=2;
	int tmp4=3;
	int tmp5=4;

	while(tmp1>=0&&tmp5<faceOfCards.size())
	{
		if(faceOfCards[tmp1]+1==faceOfCards[tmp2]&&faceOfCards[tmp1]+2==faceOfCards[tmp3]&&faceOfCards[tmp1]+3==faceOfCards[tmp4]&&faceOfCards[tmp1]+4==faceOfCards[tmp5])
		{	
			return true;
			break;
		}
		else 
			tmp1++;tmp2++;tmp3++;tmp4++;tmp5++;
	}

	return false;
}

int PlayerCard::gradeCards()
{
	int score=0;

	int tongHao3=0;int tongHao4=0;
	int dz=countDuiZi(tongHao3,tongHao4);
	if(dz==1)  score++;
	if(dz==2)  score+=3;

	if(tongHao3>0)  score+=5;
	if(tongHao4>0)  score+=7;

	bool th=tongHua();
	if(th==1)   score+=7;
	
	bool ts=tongShun();
	if(ts==1)	score+=10;

	return score;
}

void PlayerCard::changeCard(DeckOfCards &doc,int num)
{
	Card c=doc.dealCard();
	playerCards[num-1]=c;
}

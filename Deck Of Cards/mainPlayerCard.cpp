#include "PlayerCard.h"
#include <iomanip>
#include <iostream>
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

bool PlayerCard::oneDuiZi()
{
	return 0;
}

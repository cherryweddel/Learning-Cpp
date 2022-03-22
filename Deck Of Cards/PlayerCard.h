#pragma once
#include "Card.h"
#include <vector>
using namespace std;
class PlayerCard
{
public:
	void setPlayerCard(Card);
	void returnCard();
	bool moreCards();
	int countDuiZi(int &,int &);
	bool tongHua();
	bool tongShun();
private:
	vector<Card> playerCards;
};


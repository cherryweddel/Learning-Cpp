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
	bool oneDuiZi();
private:
	vector<Card> playerCards;
};


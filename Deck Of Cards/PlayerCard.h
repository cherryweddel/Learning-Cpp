#pragma once
#include "Card.h"
#include "DeckOfCards.h"
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
	int gradeCards();
	void changeCard(DeckOfCards &,int);
private:
	vector<Card> playerCards;
};


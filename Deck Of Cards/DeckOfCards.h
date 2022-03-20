#pragma once
#ifndef DECHOFCARDS_H
#define DECHOFCARDS_H
#include <vector>
#include "Card.h"
using namespace std;
class DeckOfCards
{
public:
	DeckOfCards();
	void shuffle();
	Card dealCard();
	bool moreCards();
private:
	vector<Card> deck = {};
	int currentCard;

};

#endif // !1


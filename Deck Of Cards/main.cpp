#include "Card.h"
#include "DeckOfCards.h"
#include "PlayerCard.h"
#include <iostream>

int main()
{
	DeckOfCards doc;
	PlayerCard pc;
	int count=1;

	for(int i=1;i<5;i++)
		doc.shuffle();

	while (count!=6) {
		Card c;
		c = doc.dealCard();
		pc.setPlayerCard(c);
		count++;
	}

	pc.returnCard();
}


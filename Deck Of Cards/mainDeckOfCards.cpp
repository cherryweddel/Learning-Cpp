#include "DeckOfCards.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
DeckOfCards::DeckOfCards()
{
	int i, k;
	for (i = 1; i <= 4; i++)
	{
		for (k = 1; k <= 13; k++)
		{
			Card c(i, k);
			deck.push_back(c);
		}
	}
}

void DeckOfCards::shuffle()
{
	srand(time(0));
	int i;
	for (i = 0; i < 52; i++)
	{
		int j = rand() % 52;
		while (j == i)
		{
			j = rand() % 52;
		}
		
		Card t(1,1);
		t = deck[i];
		deck[i] = deck[j];
		deck[j] = t;
	}
}

Card DeckOfCards::dealCard()
{
	unsigned int num = deck.size() - 1;
	if (moreCards())
	{
		string s;
		Card c = deck[num];
		s = c.toString();
		//cout << setw(20) << left << s;
		deck.pop_back();
		return c;
	}
	
}

bool DeckOfCards::moreCards()
{
	unsigned int n;
	n = deck.size();
	if (n == 0)
		return 0;
	else
		return 1;
}
#include "Card.h"
#include <iostream>
Card::Card(int s, int f)
{
	if (s >= 1 && s <= 4 && f >= 1 && f <= 52)
	{
		fa = f - 1;
		su = s - 1;
	}
	else
	{
		throw invalid_argument(
			"Suit or face was out of range!"
		);
	}
}

string Card::toString()
{
	return face[fa] + " of " + suit[su];
}

int Card::getSuit()
{
	return su;
}

int Card::getFace()
{
	return fa;
}

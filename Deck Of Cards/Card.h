#pragma once
#include <string>
#ifndef CARD_H
#define CARD_H

using namespace std;

static const string suit[4] = { "Hearts","Diamonds","Clubs","Spades" };
static const string face[13] = { "Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };

class Card
{
public:

	Card() {};
	Card(int, int);
	string toString();
	int getSuit();
	int getFace();
private:
	int fa;
	int su;
};

#endif // !CARD_H


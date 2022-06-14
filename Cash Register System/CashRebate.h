#pragma once
#include "AccCash.h"
class CashRebate :
    public AccCash
{
    double moneyRebate = 0.9;
public:
    CashRebate();
    void accCash();
    void printMoney();
};


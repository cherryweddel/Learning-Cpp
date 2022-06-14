#pragma once
#include "AccCash.h"
class CashReturn :
    public AccCash
{
    int moneyCondition=200;
    int moneyReturn=80;
public:
    CashReturn();
    void accCash();
    void printMoney();
};


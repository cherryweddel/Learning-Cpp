#include "AccCash.h"

AccCash::AccCash()
{
    cout << "What is the invoice amount?" << endl;
    cin >> money;
}

void AccCash::accCash()
{
    actPaid = money;
}

void AccCash::printMoney()
{
    cout << "Your invoice amount is $" << money << endl;
    cout << "You actually paid $" << actPaid << endl;
    cnt++;
    cout << cnt << endl;
}

int AccCash::cnt = 0;

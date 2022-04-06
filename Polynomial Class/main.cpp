#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{
    cout << "Please enter the first Polynomial: "<<endl;
    Polynomial p1;
    p1.mergerOfSimilarItems();
    p1.sortPoly();
    p1.printPoly();
    //cout << "Please enter the second Polynomial: "<<endl;
    Polynomial p2;
    //p2.printPoly();
    //Polynomial p3(0);
    p1+=p2;
    p1.printPoly();
}
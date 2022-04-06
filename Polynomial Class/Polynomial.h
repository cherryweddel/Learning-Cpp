#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include <iostream>
#include <vector>
using namespace std;
struct term
{
    int coefficient;
    int index;
};

class Polynomial{
public:
    Polynomial();
    Polynomial(bool);
    void mergerOfSimilarItems();
    void sortPoly();
    void printPoly();
    Polynomial operator+(Polynomial&);
    Polynomial operator-(Polynomial&);
    Polynomial operator*(Polynomial&);
    //void operator=(Polynomial&);
    void operator+=(Polynomial&);
    void operator-=(Polynomial&);
    void operator*=(Polynomial&);
private:
    vector<term> poly;
};


#endif
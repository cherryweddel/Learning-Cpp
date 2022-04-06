#include "Polynomial.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

Polynomial::Polynomial()
{
    term t;
    do{
    cout << "Please enter the coefficient (If you wanna quit, enter 0.) : ";
    cin >>t.coefficient;
    if(t.coefficient==0) break;
    cout << "Please enter the index: ";
    cin >> t.index;
    poly.push_back(t);
     } while(true);

    mergerOfSimilarItems();
    sortPoly();

}

Polynomial::Polynomial(bool flag){}

void Polynomial::mergerOfSimilarItems()
{
    for (int i=0;i<poly.size();i++)
    {
        for (int k=i+1;k<poly.size();k++)
        {
            if(poly[k].index==poly[i].index)
            {
                poly[i].coefficient+=poly[k].coefficient;
                auto it=poly.begin()+k;
                poly.erase(it);
            }
        }
    }
}

int cmp(term t1,term t2)
{
    return t1.index>t2.index;
}

void Polynomial::sortPoly()
{
    sort(poly.begin(),poly.end(),cmp);
}

void Polynomial::printPoly()
{
    for (int i=0;i<poly.size();i++)
    {
        cout << poly[i].coefficient<<"x"<<poly[i].index<<"\t";
    }
    cout << endl;
}

Polynomial Polynomial::operator+(Polynomial& pi)
{
    Polynomial pr(1);
    
    for (int i=0;i<this->poly.size();i++)
    {
        pr.poly.push_back(this->poly[i]);
    }

    for (int i=0;i<pi.poly.size();i++)
    {
        pr.poly.push_back(pi.poly[i]);
    }

    pr.mergerOfSimilarItems();
    pr.sortPoly();
    return pr;
}

Polynomial Polynomial::operator-(Polynomial& pi)
{
    Polynomial pr(1);
    
    for (int i=0;i<this->poly.size();i++)
    {
        pr.poly.push_back(this->poly[i]);
    }

    for (int i=0;i<pi.poly.size();i++)
    {
        pi.poly[i].coefficient*=-1;
        pr.poly.push_back(pi.poly[i]);
    }

    pr.mergerOfSimilarItems();
    pr.sortPoly();
    return pr;
}

Polynomial Polynomial::operator*(Polynomial& pi)
{
    Polynomial pr(1);
    for (int i=0;i<this->poly.size();i++)
    {
        for (int k=0;k<pi.poly.size();k++)
        {
            term t;
            t.coefficient=this->poly[i].coefficient*pi.poly[k].coefficient;
            t.index=this->poly[i].index+pi.poly[k].index;
            pr.poly.push_back(t);
        }
    }

    pr.mergerOfSimilarItems();
    pr.sortPoly();
    return pr;
}

/*void Polynomial::operator=(Polynomial& pi)
{
    for (int i=0;i<pi.poly.size();i++)
    {
        this->poly.push_back(pi.poly[i]);
    }
}*/

void Polynomial::operator+=(Polynomial& pi)
{
    for (int i=0;i<pi.poly.size();i++)
    {
        this->poly.push_back(pi.poly[i]);
    }

    this->mergerOfSimilarItems();
    this->sortPoly();
}

void Polynomial::operator-=(Polynomial& pi)
{
    for (int i=0;i<pi.poly.size();i++)
    {
        term t;
        t.coefficient=pi.poly[i].coefficient*=-1;
        t.index=pi.poly[i].index;
        this->poly.push_back(t);
    }

    this->mergerOfSimilarItems();
    this->sortPoly();
}

void Polynomial::operator*=(Polynomial& pi)
{
    
    for (int i=0;i<this->poly.size();i++)
    {
        for (int k=0;k<pi.poly.size();k++)
        {
            term t;
            t.coefficient=this->poly[i].coefficient*pi.poly[k].coefficient;
            t.index=this->poly[i].index+pi.poly[k].index;
            this->poly.push_back(t);
        }
    }

    this->mergerOfSimilarItems();
    this->sortPoly();
    
}
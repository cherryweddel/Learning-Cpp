#ifndef INTEGERSET_H
#define INTEGERSET_H

#include <vector>
#include <stdexcept>
#include <array>
using namespace std;

class IntegerSet {
public:
    IntegerSet();
    IntegerSet(int *num,int l);
    IntegerSet unionOfSets(IntegerSet, IntegerSet);
    IntegerSet intersectionOfSets(IntegerSet, IntegerSet);
    void insertElement(int);
    void printSet();
    bool isEqualTo(IntegerSet);

private:
    vector<bool> number = vector<bool>(101);

};

#endif
#ifndef PUBLICFUNCTION_H
#define PUBLICFUNCTION_H
#include <vector>
#include <iostream>
#include <set>
using namespace std;
void RemoveRepeat(vector<int>& vec)
{
    set<int> setVec(vec.begin(), vec.end());
    vec.assign(setVec.begin(), setVec.end());
}



#endif


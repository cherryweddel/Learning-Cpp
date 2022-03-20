#include <iostream>
#include "Integerset.h"
using namespace std;

int main()
{
	int num1[10] = { 10,20,24,35,26,7,13,55,74,45 };
	int num2[10] = { 89,24,53,7,55,24,16,25,66,5 };
	IntegerSet collection1(num1,10);
	IntegerSet collection2(num2,10);
	IntegerSet collection3;
	IntegerSet collection4;

	collection1.printSet();
	collection2.printSet();
	collection3=collection3.unionOfSets(collection1, collection2);
	collection3.printSet();
	collection4 = collection4.intersectionOfSets(collection1, collection2);
	collection4.printSet();
	int k;
	cout << "Please enter a number: ";
	cin >> k;
	collection1.insertElement(k);
	collection1.printSet();
	bool re;
	re = collection1.isEqualTo(collection2);
	if (re)
		cout << "Set1 is equal to set2." << endl;
	else
		cout << "Set1 is not equal to set2." << endl;


}
#include "Integerset.h"
#include <iostream>
#include <vector>

IntegerSet::IntegerSet()
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		number[i] = false;
	}
}

IntegerSet::IntegerSet(int* num, int l)
{
	
	for (int i = 0; i <= 100; i++)
	{
		number[i] = false;
	}
	for (int i = 0; i < l; i++)
	{
		number[num[i]] = true;
	}
}
IntegerSet IntegerSet::unionOfSets(IntegerSet collection1, IntegerSet collection2)
{
	vector<bool> int1 = collection1.number;
	vector<bool> int2 = collection2.number;
	vector<bool> int3(101);
	IntegerSet collection3;

	for (int i = 0; i < 101; i++)
	{
		if (int1[i] == true || int2[i] == true)
			int3[i] = true;
		else
			int3[i] = false;
	}
	collection3.number = int3;
	return collection3;
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet collection1, IntegerSet collection2)
{
	vector<bool> int1 = collection1.number;
	vector<bool> int2 = collection2.number;
	vector<bool> int3(101);
	IntegerSet collection3;

	for (int i = 0; i < 101; i++)
	{
		if (int1[i] == true && int2[i] == true)
			int3[i] = true;
		else
			int3[i] = false;
	}
	collection3.number = int3;
	return collection3;
}

void IntegerSet::insertElement(int k)
{
	number[k] = true;
	
}

void IntegerSet::printSet()
{
	
	int count = 0;
	for (int i = 0; i < number.size(); i++)
	{
		if (number[i] == true)
		{
			count++;
			cout << i << "  ";
		}
		
	}
	cout << endl;
	if (count == 0)
		cout << "---";
}

bool IntegerSet::isEqualTo(IntegerSet collection)
{
	for (int i = 0; i < 101; i++)
	{
		if (number[i] != collection.number[i])
			return false;
	}
	return true;
}





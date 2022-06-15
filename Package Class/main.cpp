#include"Package.h"
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void virtualViapointer( Package*  ptr)
{
	ptr->print();
}
int main()
{
	TwoDayPackage t1("Jerry", "费城", "Tom", "P城", "13854789691", 5.2, 0.25, 2.5);
	OvernightPackage o1("Tom", "费城", "Jerry", "禹城", "14596213739", 5.2, 0.25, 0.35);
	vector<Package*>packages(2);
	packages[0] = &t1;
	packages[1] = &o1;
	for (Package* packagePtr : packages)
	{
		virtualViapointer(packagePtr);
	}
	
	
	
	
}
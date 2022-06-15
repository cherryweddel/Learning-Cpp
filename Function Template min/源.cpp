
#include <iostream>
using namespace std;

template <typename T>
T minimum(T value1, T value2, T value3)
{
	T minimumValue = value1;

	if (value2 < minimumValue)
		minimumValue = value2;

	if (value3 < minimumValue)
		minimumValue = value3;

	return minimumValue;
}

int main()
{
	int num1, num2, num3;

	cout << "请输入三个数字：";
	cin >> num1 >> num2 >> num3;

	cout << minimum(num1,num2,num3);
}
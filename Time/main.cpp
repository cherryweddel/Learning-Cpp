#include "Time.h"

int main()
{
Start:
	int kind;
	cout << "Please enter your location." << endl;
	cout << "Beijing-1, New York-2, Tokyo-3, Paris-4" << endl;
	cin >> kind;
	while (kind != 1 && kind != 2 && kind != 3 && kind != 4)
	{
		cout << "What you enter is wrong! Please enter again!" << endl;
		cout << "Beijing-1, New York-2, Tokyo-3, Paris-4" << endl;
		cin >> kind;
	}

	int h;
	switch (kind)
	{
	case 1:
		h = 8;
		break;
	case 2:
		h = -5;
		break;
	case 3:
		h = 9;
		break;
	case 4:
		h = 2;
		break;
	default:
		cout << "The program is not supposed to come here!" << endl;
		break;
	}

	Time t;
	t.printTime();

	char answer;
	cout << "Do you want to use this program again? (Enter y or n)" << endl;
	cin >> answer;
	while (answer != 'y' && answer != 'n')
	{
		cout << "What you enter is wrong! Please enter again!" << endl;
		cout << "Do you want to use this program again? (Enter y or n)" << endl;
		cin >> answer;
	}
	if(answer=='y')
		goto Start;
}
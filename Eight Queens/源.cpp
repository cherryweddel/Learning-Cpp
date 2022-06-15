#include <iostream>

using namespace std;

int chess[8][8];

int judge(int row, int col)
{
	int i, k;
	for (i = 0; i < 8; i++)
	{
		if (chess[i][col] == 1)
		{
			return 0;
		}
	}//列
	for (i = row, k = col; i >= 0 && k >= 0; i--, k--)
	{
		if (chess[i][k] == 1)
		{
			return 0;
		}
	}//左对角
	for (i = row, k = col; i >= 0 && k < 8; i--, k++)
	{
		if (chess[i][k] == 1)
		{
			return 0;
		}
	}//右对角
	for (i = row, k = col; i <8 && k <8; i++, k++)
	{
		if (chess[i][k] == 1)
		{
			return 0;
		}
	}
	for (i = row, k = col; i <8 && k >= 0; i++, k--)
	{
		if (chess[i][k] == 1)
		{
			return 0;
		}
	}
	for (i = 0; i < 8; i++)
	{
		if (chess[row][i] == 1)
		{
			return 0;
		}
	}//行
	return 1;
}

void result()
{
	int row, col;
	cout << "****************************" << endl;
	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			if (chess[row][col] == 1)
			{
				cout << "0";
			}
			else
			{
				cout << "#";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void action(int row)
{
	int col;
	if (row > 7)
	{
		result();
	}
	for (col = 0; col < 8; col++)
	{
		if (judge(row, col))
		{
			chess[row][col] = 1;
			action(row + 1);
			chess[row][col] = 0;
		}
	}
}

int main()
{
	int row = 0;
	action(row);
	return 0;
	
}
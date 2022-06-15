#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void title()
{
	cout << "***********************************" << endl;
	cout << endl;
	cout << "         TIC TAC TOE" << endl;
	cout << "        PLAYER VS AI!" << endl;
	cout << endl;
	cout << "***********************************" << endl;
	cout << endl;
	cout << endl;
}

void generateBoard(char character[3][3])//�˺�����������ַ�������
{
	cout << "  0   1   2 " << endl;
	cout << "0 " << character[0][0] << " | " << character[0][1] << " | " << character[0][2] << " " << endl;
	cout << " ___|___|___" << endl;
	cout << "1 " << character[1][0] << " | " << character[1][1] << " | " << character[1][2] << " " << endl;
	cout << " ___|___|___" << endl;
	cout << "2 " << character[2][0] << " | " << character[2][1] << " | " << character[2][2] << " " << endl;
	cout << "    |   |   " << endl;
}

int judgeSituation(char character[3][3])
{
	int i,n;
	int x=0,y=0;
	int res=3;
	int flag = 0;

	for (i = 0; i <= 2; i++)
    {
		int countx = 0, counto = 0;
		for (n = 0; n <= 2; n++)
		{
			if (character[i][n] == 'x')
				countx++;
			if (character[i][n] == 'o')
				counto++;
			if (character[i][n] == ' ')
				x = i; y = n;
		}
		if (countx == 2 && counto == 0)
		{
			res = x * 10 + y;
			break;
		}
		else if (counto == 2 && countx == 0)
		{
			res = x * 10 + y;
			break;
		}
	}
	for (n = 0; n <= 2; n++)
	{
		int countx = 0, counto = 0;
		for (i = 0; i <= 2; i++)
		{
			if (character[i][n] == 'x')
				countx++;
			if (character[i][n] == 'o')
				counto++;
			if (character[i][n] == ' ')
				x = i; y = n;
		}
		if (countx == 2 && counto == 0)
		{
			res = x * 10 + y;
			break;
		}
		else if (counto == 2 && countx == 0)
		{
			res = x * 10 + y;
			break;
		}
	}
	while (flag==0)
	{ 
		int countx = 0, counto = 0;
		for (i = 0, n = 0; i <= 2 && n <= 2; i++, n++)
		{
			if (character[i][n] == 'x')
				countx++;
			if (character[i][n] == 'o')
				counto++;
			if (character[i][n] == ' ')
				x = i; y = n;
		}
		if (countx == 2 && counto == 0)
		{
			res = x * 10 + y;
			break;
		}
		else if (counto == 2 && countx == 0)
		{
			res = x * 10 + y;
			break;
		}
		flag = 1;
	}
	flag = 0;
	while (flag == 0)
	{
		int countx = 0, counto = 0;
		for (i = 0, n = 2; i <= 2 && n >=0; i++, n--)
		{
			if (character[i][n] == 'x')
				countx++;
			if (character[i][n] == 'o')
				counto++;
			if (character[i][n] == ' ')
				x = i; y = n;
		}
		if (countx == 2 && counto == 0)
		{
			res = x * 10 + y;
			break;
		}
		else if (counto == 2 && countx == 0)
		{
			res = x * 10 + y;
			break;
		}
		flag = 1;
	}

	return res;

}

int judgeResultx(char character[3][3])//����ֵΪ1��ʾӮ
{
	if (character[0][0] == character[0][1] && character[0][1] == character[0][2]&& character[0][2]=='x')
		return 1;
	else if (character[1][0] == character[1][1] && character[1][1] == character[1][2] && character[1][2] == 'x')
		return 1;
	else if (character[2][0] == character[2][1] && character[2][1] == character[2][2] && character[2][2] == 'x')
		return 1;
	else if (character[0][0] == character[1][0] && character[1][0] == character[2][0] && character[2][0] == 'x')
		return 1;
	else if (character[0][1] == character[1][1] && character[1][1] == character[2][1] && character[2][1] == 'x')
		return 1;
	else if (character[0][2] == character[1][2] && character[1][2] == character[2][2] && character[2][2] == 'x')
		return 1;
	else if (character[0][0] == character[1][1] && character[1][1] == character[2][2] && character[2][2] == 'x')
		return 1;
	else if (character[2][0] == character[1][1] && character[1][1] == character[0][2] && character[0][2] == 'x')
		return 1;
	else
		return 0;

}

int judgeResulto(char character[3][3])//����ֵΪ1��ʾӮ
{
	if (character[0][0] == character[0][1] && character[0][1] == character[0][2] && character[0][2] == 'o')
		return 1;
	else if (character[1][0] == character[1][1] && character[1][1] == character[1][2] && character[1][2] == 'o')
		return 1;
	else if (character[2][0] == character[2][1] && character[2][1] == character[2][2] && character[2][2] == 'o')
		return 1;
	else if (character[0][0] == character[1][0] && character[1][0] == character[2][0] && character[2][0] == 'o')
		return 1;
	else if (character[0][1] == character[1][1] && character[1][1] == character[2][1] && character[2][1] == 'o')
		return 1;
	else if (character[0][2] == character[1][2] && character[1][2] == character[2][2] && character[2][2] == 'o')
		return 1;
	else if (character[0][0] == character[1][1] && character[1][1] == character[2][2] && character[2][2] == 'o')
		return 1;
	else if (character[2][0] == character[1][1] && character[1][1] == character[0][2] && character[0][2] == 'o')
		return 1;
	else
		return 0;

}

int main()
{
	srand(static_cast <unsigned int>(time(0)));
	title();//�������

	int i, n;
	char character[3][3];
	for (i = 0; i <= 2; i++)
	{
		for (n = 0; n <= 2; n++)
			character[i][n] = ' ';
	}//��ʼ������ȫ��Ϊ�ո�

	generateBoard(character);//��ʾ����

	int x, y;
	int resx = 0;//��ʾ���
	int reso = 0;
	int AIresult;
	bool first = true;

	while (resx != 1&&reso != 1)
	{
		cout << "Please enter x and y:";
		cin >> x >> y;//�������x��λ��
		while (character[x][y] != ' ')
		{
			cout << "You are WRONG!" << endl;
			cout << "Please enter x and y:";
			cin >> x >> y;
		}//ȷ�����뵽��ȷ�Ŀո���

		character[x][y] = 'x';//���x��λ��
		system("cls");
		resx = judgeResultx(character);
		if (resx == 1)
			break;
		if (first=true)
		{
			x = rand() % 3;
			y = rand() % 3;
			first = false;
		}
		while (character[x][y] != ' ')
		{
			x = rand() % 3;
			y = rand() % 3;
		}

		while (character[x][y] != ' ')
		{
			AIresult = judgeSituation(character);
			if (AIresult != 3)
			{
				x = AIresult / 10;
				y = AIresult % 10;
			}
			else break;
        }
		

		character[x][y] = 'o';//���o��λ��
		generateBoard(character);//��ʾ����
		reso = judgeResulto(character);

	}

	if (resx == 1)
		cout << "PLAYER WIN!" << endl;
	if (reso == 1)
		cout << "AI WIN!" << endl;
	
}
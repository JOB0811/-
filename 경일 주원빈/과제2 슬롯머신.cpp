#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#define cheat
using std::cin;
using std::cout;
using std::endl;

/*
����2. ���Ըӽ�
	-777 ���� ���ڰ� 3�� ���ý� ���ñݾ��� 12��
	- 7�� ������ ���� ���� 3�� ���ý� ���ñݾ� 5��
	-���� ���� 2�� ���ý� ���ñݾ��� 2��
	- �׿ܿ��� ���ñݾ� �ұ�
	-�⺻ ������ : 10,000�� / �ּ� ���� : 1,000/ ���� ���� : 1,000

	�ʼ�:
	1. �귿�� �����Ѵ� ����� ->�ð�ȭ �ؿð�

	2. ������ �ϰ� ���� �귿�� ������ ������ �귿�� �ڵ����� ��� �ݺ��Ѵ�.

	3. ġƮ�� Ȱ��ȭ �Ǹ� ���� 3���� �Է� �޴´�.
	�� ġƮ�� �Էµ� ���ڴ� ������ �귿�� �õ��ɋ� ��÷�Ǵ°� Ȯ���� �� �ְ�.

	//��������
	- ��Ʈ�� ����´�. ���ڿ�
	- �����Ұ� ������ �´�.
	*/

int rullet[7] = { 1,2,3,4,5,6,7 };
int count = 0;
int betting = 10000;
int cheat1 = 0;

int num1 = 0;
int num2 = 0;
int num3 = 0;
int min = 1000;
int betMoney = 0;
void main()
{
	do {
		srand(time(NULL));
		num1 = rullet[rand() % 7];
		num2 = rullet[rand() % 7];
		num3 = rullet[rand() % 7];

		cout << "Ư�� �̺�Ʈ! ���� �̺�Ʈ�� �����غ�����!" << endl;
		cout << "���� ����� ��������" << betting << "�� �Դϴ�!" << endl;
		cout << "�ּ� ���ñ� �׼���" << min << "�� �Դϴ�" << ": ";

		cout << "�󸶸� �����Ͻðڽ��ϱ�? : ";
		cin >> betMoney;
		if (betMoney <= 0 || betMoney > betting)
		{
			cout << "0�� ���ϳ� ���ñݺ��� ���� �ݾ��� ���� �� �����ϴ�!";
			continue;
		}
		
	

	do {
			cout << "ġƮ�� ����Ͻðڽ��ϱ�? : ";
			cin >> cheat1;
			if (cheat1 == 1)
			{
#ifdef cheat

				cout << "ġƮ���! ���ϴ� ���ڸ� �Է��ϸ� �귿�� ���ڰ� Ȯ���˴ϴ�." << endl;
				cin >> num1;
				cin >> num2;
				cin >> num3;
#endif // cheat
			}

		} while ((num1 <= 0 || num1 > 9 || num2 <= 0 || num2 > 9 || num2 <= 0 || num2 > 9));


		while (true)
		{
			cout << rand() % 7 << rand() % 7 << rand() % 7;
			cout << "\b\b\b";
			Sleep(50);

			if (_kbhit())
			{
				_getch();
				break;
			}
		}


		cout << num1 << num2 << num3 << endl;

		if (num1 == num2 == num3 == 7)
		{
			cout << "���ڿ� õ������ ����� �����ñ���!" << endl;
			cout << "��Ű���쿡 �����ϼ̽��ϴ�! ���ñ� 12�踦 ȹ���մϴ�!" << endl;
			betting = betting + betMoney * 12;
		}

		else if (num1 == num2 == num3 && num1 == num2 == num3 != 7)
		{
			cout << "Ÿ¥�� ����� �������ϴ�!" << endl;
			cout << "���� ���� 3���� �����ϼ̽��ϴ�! ���ñ� 5�踦 ȹ���մϴ�!" << endl;
			betting = betting + betMoney * 5;
		}

		else if (num1 == num2 || num1 == num3 || num2 == num3)
		{
			cout << "���ü���!" << endl;
			cout << "���ÿ� ������ ���ñ��� 2�� �����̽��ϴ�!" << endl;
			betting = betting + betMoney * 2;
		}

		else
		{
			cout << "�������� ������ �и��� �������Դϴ�." << endl;
			cout << "�귿�� ������ ���ñ��� �����̽��ϴ٤�" << endl;
			betting = betting - betMoney;
		}
	} while (betting > 0);
}



#include<iostream>
#include<stdlib.h>
#include<time.h>

using std::cout;
using std::cin;
using std::endl;
/*
(�迭, �ݺ���, ���ǹ��� �ַ� ����ؼ� ����.)
(��÷ ��ȣ�� ���� ���ڰ� ���ͼ� �ȵȴ�/����� �Է� ���ڵ� ���� ���ڰ� ������ �ȵȴ�.)
����2.�ζ� ��÷��

- ��÷ ��ȣ 6�� + ���ʽ� ��ȣ 1��

- 6�� �Է�

- 1�� : ��÷ ��ȣ 6���� ���� �Է��� 6���� ���ڰ� ������.

- 2�� : ��÷ ��ȣ 5�� + ���ʽ���ȣ 1���� ���� �Է��� 6�� ���ڰ� ��ġ�Ҷ�

- 3�� : ��÷ ��ȣ 5���� ���� �Է��� 5���� ���ڰ� ������

- 4�� : ��÷��ȣ 4���� ���� �Է��� 4���� ���ڰ� ������

- 5�� : ��÷��ȣ 3���� ���� �Է��� 3���� ���ڰ� ������
*/

int lucky[6];  // ��ǻ�� ���� ���� ����
int lottoNum[6]; // ����� ���� ���� ����
int bonusNum = 0; // ���ʽ� ��ȣ
int j = 0;
bool dupliLucky;
bool dupliNum;
int count = 0;



void main()
{
	srand(time(NULL));
	for (int i = 0; i < 6; i++)
	{
		do {
			dupliLucky = false;
			lucky[i] = rand() % 43 + 1;
			bonusNum = rand() % 43 + 1;
			for (int j = 0; i > j; j++)
				if (lucky[i] == lucky[j])
				{
					cout << "��÷��ȣ�߿� �ߺ� ���ڰ� �����Ǿ� �ٽ� �����ϰڽ��ϴ�!" << endl;
					dupliLucky = true;
					continue;
				}
				if (lucky[i] == bonusNum)
				{
					cout << "���ʽ� ��ȣ�� ��÷��ȣ�� �ߺ��Ǿ� �ٽ� �����ϰڽ��ϴ�!" << endl;
					dupliLucky = true;
					continue;
				}

			} while (dupliLucky);
		}

	cout << "�̹� �ζ� ��÷ ��÷ ��ȣ �Դϴ�!" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << lucky[i] << " ";
	}
	cout << "\n";
	cout << "���ʽ� ��ȣ : " << bonusNum << endl;
	cout << "�ζ� ��÷�� �����ϰڽ��ϴ�! ����ڰ� ���ϴ� ��ȣ�� �Է����ּ��� :" << endl;
	for (int i = 0; i < 6; i++)
	{
		do {
			dupliNum = false;
			cin >> lottoNum[i];
			for (int j = 0; i > j; j++)
				if (lottoNum[i] == lottoNum[j])
				{
					cout << "�ߺ��� ���ڴ� �Է��� �� �����ϴ�! �ٽ� �Է��ϼ���!" << endl;
					dupliNum = true;
					break;
				}
		} while (dupliNum);

		if (lottoNum[i] <= 0 || lottoNum[i] > 44)
		{
			cout << "�ζ� ������ ������ 0���� 44�����Դϴ�! �ٽ� �Է����ּ���" << endl;
			continue;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (lucky[i] == lottoNum[j])
			{
				count++;
			}
		}
	}

	switch (bonusNum)
	{
	case 1:
		if (count == 5)
		{
			cout << "�����մϴ�! 2���Դϴ�!";
		}
		break;

	default:
		if (count == 6)
		{
			cout << "�����մϴ�! 1���Դϴ�!";
		}

		else if (count == 5)
		{
			cout << "�����մϴ�! 3���Դϴ�!";
		}

		else if (count == 4)
		{
			cout << "�����մϴ�! 4���Դϴ�!";
		}

		else if (count == 3)
		{
			cout << "�����մϴ�! 5���Դϴ�!";
		}
		break;
	}
}




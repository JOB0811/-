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

int lucky[7];  // ��ǻ�� ���� ���� ����
int lottoNum[7]; // ����� ���� ���� ����
int bonusNum = 0; // ���ʽ� ��ȣ





void main()
{
	srand(time(NULL));
		for (int i = 0; i < 7; i++)
		{
			lucky[i] = rand() % 45;
			int j = i - 1;
			while(lucky[i] == 0)
			if (lucky[i] == 0)
			{
				cout << "��÷ ��ȣ�߿� 0�� ���ԵǾ� �ٽ� �����ϰڽ��ϴ�!" << endl;
				continue;
			}
			if (lucky[i] == lucky[j])
			{
				cout << "��÷��ȣ�߿� �ߺ� ���ڰ� �����Ǿ� �ٽ� �����ϰڽ��ϴ�!" << endl;
				continue;
			}
		}
		cout << "�ζ� ��÷�� �����ϰڽ��ϴ�! ����ڰ� ���ϴ� ��ȣ�� �Է����ּ��� :" << endl;
		for (int i = 0; i < 7; i++)
		{
			cin >> lottoNum[i];
			if (lottoNum[i] <= 0 || lottoNum[i] > 44)
			{
				cout << "�ζ� ������ ������ 0���� 44�����Դϴ�! �ٽ� �Է����ּ���" << endl;
					continue;
			}
		}

		bonusNum = rand() % 45;

		cout << "�̹� �ζ� ��÷ ��÷ ��ȣ �Դϴ�!" << endl;
		for (int i = 0; i < 7; i++)
		{
			 cout << lucky[i] << " ";
		}
		for (int i = 0; i < 7; i++)
		{
			if (lucky[0] == lottoNum[0] && lucky[1] == lottoNum[1] && lucky[2] == lottoNum[2] && lucky[3] == lottoNum[3] && lucky[4] == lottoNum[4] && lucky[5] == lottoNum[5] && lucky[6] == lottoNum[6])
			{
				cout << "1� ��÷�Ǽ̽��ϴ�! �����մϴ�!" << endl;
					break;
			}
		}





}
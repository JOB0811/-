#include<iostream>
#include<time.h>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;



/* 
����1.����������

- ����ġ���� �̿��Ͽ� ����(���ǹ��� ����ص� ������, ���̽��� ����ġ������ ���ڴ�)

- ġƮ ��ɰ� ���� ��� �߰�
�� �ʱ� ������ : 10, 000��
�� �ּ� ���� : 1, 000��

- 5���� �ϰų� ���� ���� ���� ���� ������ ����

- �̱�� �ǵ��� 3�踦 ���, ���� �ǵ��� 7�踦 �ҵ��� ����

- ����� �ǵ��� 5�踦 ��´�.

*/


int num = 0; 
int count = 0;
int betting = 10000; // ������
int betMoney = 0; // ���ñ�
const int min = 1000; // �ּ� ���ñ�
const int R = 0;
const int S = 1;
const int P = 2;

void main() {

		for (count = 0; count < 5; count++) {
			
			srand(time(NULL));
			int comnum = rand() % 3;


			if (betting <= 0)
			{
				cout << "�ǵ��� ��� �Ҿ� ������ ����˴ϴ�..�� �õ带 �ٽ� �������ּ���" << endl;
				break;
			}

			cout << "Ư�� �̺�Ʈ! ���� �̺�Ʈ�� �����غ�����!" << endl;
			cout << "���� ����� ��������" << betting << "�� �Դϴ�!" << endl;
			cout << "�ּ� ���ñ� �׼���" << min << "�� �Դϴ�" << ": ";

			cout << "�󸶸� �����Ͻðڽ��ϱ�? : ";
			cin >> betMoney;

			if (betting < betMoney)
			{
				cout << "�����ݺ��� ū���� ������ �� �����ϴ�!" << endl;
				continue;
			}

			switch (comnum)
			{
			case 0:
			{
				cout << "ġƮ �ߵ�! ������ ��ǻ�Ͱ� �� �д� �����Դϴ�.";
				break;
			}

			case 1:
			{
				cout << "ġƮ �ߵ�! ������ ��ǻ�Ͱ� �� �д� �����Դϴ�.";
				break;
			}

			case 2:
			{
				cout << "ġƮ �ߵ�! ������ ��ǻ�Ͱ� �� �д� ���Դϴ�.";
				break;
			}
			}
			
			cout << "(0)���� (1)���� (2)�� �߿��� ���ڸ� �������ּ��� :" << endl;
			cin >> num;
			

			if (num < 0 || num > 2)
			{
				cout << "���������� �߿����� ������ �ּ���!" << endl;
				count--;
				continue;
			}
			switch(num)
			{

			case  0:
				if (comnum == 2)
				{
					cout << " �̰���ϴ�!" << endl;
					betting = betting + (betMoney * 3);

				}
				else if (comnum == 0)
				{
					cout << " �����ϴ�!" << endl;
					betting = betting + (betMoney * 5);
				}
				else
				{
					cout << " �����ϴ٤�" << endl;
					betting = betting - (betMoney * 7);
				}
				break;

			case 1:
				if (comnum == 0)
				{
					cout << "�̰���ϴ�!" << endl;
					betting = betting + (betMoney * 3);
				}
				else if (comnum == 1)
				{
					cout << " �����ϴ�!" << endl;
					betting = betting + (betMoney * 5);
				}
				else
				{
					cout << "�����ϴ٤�" << endl;
					betting = betting - (betMoney * 7);
				}
				break;

			case 2:
				if (comnum == 1)
				{
					cout << " �̰���ϴ�!" << endl;
					betting = betting + (betMoney * 3);
				}
				else if (comnum == 2)
				{
					cout << " �����ϴ�!" << endl;
					betting = betting + (betMoney * 5);
				}
				else
				{
					cout << " �����ϴ٤�" << endl;
					betting = betting - (betMoney * 7);
				}
				break;

			}
		}


}
#include<iostream>
#include<time.h>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;


//���� �ۼ� ��, ������ ���� �� ���� 1. ����, ����, ���� ����� ž���� �Լ� ���� ����, ���� ���� ������ ����� ���ӽ����̽� Ȱ���غ���

/*

����1.���������� ����(������ �����Ͽ� �ϰ� �� ���� �����̹Ƿ� �ִ��� �����ϰ� �ڵ��غ���.)


- if���� �̿��� �����.
�� switch ������� ����

- ������ ���� Ƚ���� �� 5��
�� ���Ĵ� ���� ����

- �ʼ� : ġƮ(��ǻ�Ͱ� ���� ������(����, ����, ��)�� � ���� ���� ����ڿ��� �̸� �˷��ְ� Ȯ�������� �̱�� �ְ� ����� ��.


�ܼ� ���� ����?
1. ����ڿ��� ���ڿ��� �Է� �޴´�. (�� 5��)
2.




*/

int num = 0;
int count = 0;
int Rsp();
const int R = 0;
const int S = 1;
const int P = 2;

void main() {
	cout << "(0)���� (1)���� (2)�� �߿��� ���ڸ� �������ּ��� :";


	for(count = 0; count <= 5; count++)
	{
		srand(time(NULL));
		int com = rand() % 3;

		if (num < 0 || num > 2)
		{
			cout << "�ش��ϴ� ���ڸ� �ٽ� �Է����ּ���!" << endl;
		}


		cout << "3���� �߿��� �� ���� ������ �ּ��� :" << endl;
		cin >> num;

		if (num == 0) {
			if (com == 2) {
				cout << "�̰���ϴ�! �����մϴ�" << endl;
			}
			else {
				cout << "��ǻ�Ͱ� �̰���ϴ�!" << endl;
			}
		}
		if (num == com)
		{
			cout << "�����ϴ�!" << endl;
		}

		if (num == 1) {
			if (com == 0) {
				cout << "�̰���ϴ�! �����մϴ�" << endl;
			}
			else {
				cout << "��ǻ�Ͱ� �̰���ϴ�!" << endl;
			}

			if (num == 2) {
				if (com == 1) {
					cout << "�̰���ϴ�! �����մϴ�" << endl;
				}
				else {
					cout << "��ǻ�Ͱ� �̰���ϴ�!" << endl;
				}
			}

			count++;
		}
	}
}











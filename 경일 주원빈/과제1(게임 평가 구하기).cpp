#include<iostream>
#include<time.h>
#include<stdlib.h>

using std::cout;
using std::cin;
using std::endl;


int point[6] = { 5,3,2,3,5,5 };
int point2[6];
float ave1, ave2 = 0;
float ave3, ave4 = 0;

void main()

{
	cout << "���� 1�� ��� ������? " << endl;
	for (int i = 0; i <= 5; i++)
	{
		ave1 += point[i];
	}
	ave2 = ave1 / 6;
	cout << ave2 << endl;



	cout << "���� 2�� ��� ������ �������� ����ϴ�! ������ �Է��� �ּ���!" << endl;
	for (int i = 0; i <= 5; i++)
	{
		cin >> point2[i];
		ave3 += point2[i];
	}
	ave4 = ave3 / 6;
	cout << ave4 << endl;

}





/*

����1. ���� �򰡰� ���ϱ�(���)
	-�׸��� 6����
	-���� ��: ĳ����/���/����Ʈ/������/���ݷ�/���̵� ���...
	-����: 1���� �迭�� ���� ���ϰ� ��հ��� ���ؼ� ���.
		   1���� �迭�� ���� �����ϰ� ���� ���� �Է��ϸ� ��հ��� ���ؼ� ����Ѵ�.



*/
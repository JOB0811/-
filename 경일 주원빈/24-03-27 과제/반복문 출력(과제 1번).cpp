#include<iostream>


/*

���� 1. �ݺ��� ���

for / while / do ~ while�� (3���� ����/�ݺ��� 1���� ����ϱ�)

- 20���� 1���� ���

- 1���� 20���� ���
�� ¦����

*/

/*
����� ������ ������ �����ؼ� ����ϱ�

20~1 (¦��)
1~20 (¦��)
��� ���;� ����?

20 19 18 17 16 15 14 13 12 11..

2 4 6 8 10 12 14 16 18 20 ( ��Ģ : 2���� 2�� ���ϴ°� "�ݺ�"��)
¦���� ����Ϸ��� ��� �ؾ���?
1,2,3,... 20���� ������ �ſ���
1,3,5..�� �Ÿ�����?
�ݺ����� ����Ǳ����� Ȧ������ �����ϰ� �ִ� ������ ���� ¦������ ���´�?



*/

using std::cout;
using std::cin;
using std::endl;


void main()
{
	int i = 20;
	int j = 20;

	while (i > 0)
	{
		cout << i << endl;
		i--;

	};

	printf("\n");

	do
	{
		cout << j << endl;
		j--;
	} while (j > 0);

	printf("\n");


	for (int k = 20; k > 0; k--)
	{
		cout << k << endl;
	}

	printf("\n");



	int num0 = 2;

	while (num0 <= 20)
	{
		cout << num0 << endl;
		num0++;
		num0++;

	}

	printf("\n");


	int num1 = 2;
	do
	{
		cout << num1 << endl;
		num1++;
		num1++;

	} while (num1 <= 20);

	printf("\n");

	for (int numA = 2; numA <= 20; numA++) {
		cout << numA << endl;
		numA++;
	}








}
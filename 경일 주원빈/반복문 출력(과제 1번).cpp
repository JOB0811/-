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
	}while(j > 0);

	printf("\n");


	for (int k = 20; k > 0; k--)
	{
		cout << k << endl;
	}

	printf("\n");


	/* 1���� 20���� ¦���� ���
	
	int num0 = 1;
	int num1 = 1;
	while(num0 <= 20) 
	{
		num0 = num0 + num1;
		cout << num0 << endl;
		num0--;
		
	}

	printf("\n");


	int num2 = 1;
	int num3 = num2 - 1;
	do 
	{
		cout << num2 << endl;
		num2++;
		num2 = num2 - num3;

	} while (num2 <= 20);

	printf("\n");

	int numA = 1;
	int numB = numA - 1;
	for (; numA <= 20; numA++) {
		cout << numA << endl;
		numA = numA - numB;
	}
	
	*/


		



}

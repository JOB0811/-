#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

using std::cin;
using std::cout;
using std::endl;


/*
���� 1. ¦ ���߱�

- �� Ŭ����

- ������ : 5 x 4

- �� ��/ �� ��/ �� ��/ �� ��/ �� ��
�迭 -> ���ִ°� ���°� ����
+ �ٸ� ���ڷ� ǥ�õ� �迭
4��

- �ƽ�Ű �ڵ带 �̿��ؼ� �����ϸ� �� �� ���� ���̴�. (�ƽ�Ű �ڵ�� ������ �˻��ؼ� �����϶�.(�� �ܿ��� ��)) (���ᵵ ������)

- ¦�� ������ ��ȣ�� ��� ���µ� ���·� �����ؾ� �Ѵ�.
if or switch�� ���� �޼� ��, while������ ��� UI�� ǥ��ǰ�



#define���� ġƮ1 ��ũ�� �޼���, ���� �а� ���� �����ǰ� �ڵ� �ۼ�
time �Լ��� �����Ǵ� �Լ��� 5�ʵ� Ǯ���� �ڵ� �ۼ�
- 2���� �������� ġƮ�� ����� �´�.
-#define���� ġƮ2 ��ũ�� �޼���,
	�� 1. ġƮŰ�� ������ �и� ���� ���½��� �÷��̾�� �����ְ� 5�ʵڿ�
		  �ٽ� ���� ����
	�� 2. ġƮŰ�� ������ �ѽ��� ī�带 �����ϰ� ���� ����
		  ���� ����ڰ� ������ �ѻ��� ���߸鼭 ������ ����Ǹ� OK


- if ���� ���� cin���� Ű�� �Է¹����� �����ð� sleep�� continue;�ϰ� �ۼ�
- ����� ���ӿ��� ������ϱ� ����� �߰��� ��

- ������ �������� ������� ������ �ο��� ������ �ؼ��ڵ带 ���Ǳ�� ���캸��,
����� ��ɵ��� �����Ƿ� ������� �ٲ㼭 ���ų����� �� ����غ���.


�� ���� ������ ���� ���� ����.



Ÿ�� ����. ������

- �ð��� 10��



���� ����. ���

- �����Ұ� ������ �´�.
�� ���ϸ� �׳� ��������

- ��Ʈ�� ����´�.
*/

int shape1[10]; // ���� ���� ����
int shape2[10]; // ���� �ִ� ����
int shapeFair[20]; //������ ������ ������ ��
int mtShape = 0; // �����, ������ų ����




void main()
{
	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		shapeFair[i] = i;
	}

	for (int i = 0; i < 10000; i++)
	{
		//����
		int index1 = rand() % 20;
		int index2 = rand() % 20;
		int temp = shapeFair[index1];
		shapeFair[index1] = shapeFair[index2];
		shapeFair[index2] = temp;
	}




	for (int i = 0; i < 2; i++)
	{
		shape1[i] = shapeFair[mtShape + 1] / 5;


		switch (shape1[i])
		{
		case 0:
			cout << "��";
			break;
		case 1:
			cout << "��";
			break;
		case 2:
			cout << "��";
			break;
		case 3:
			cout << "��";
			break;
		case 4:
			cout << "��";
			break;

		}

	}

	for (int i = 0; i < 2; i++)
	{
		shape2[i] == shapeFair[mtShape + 1] / 2;

		switch (shape2[i])
		{
		case 0:
			cout << "��";
			break;
		case 1:
			cout << "��";
			break;
		case 2:
			cout << "��";
			break;
		case 3:
			cout << "��";
			break;
		case 4:
			cout << "��";
			break;
		}
	}
}


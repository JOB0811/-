
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

char front[20]; // ����
char back[20]; // ����
int num;




void main()
{

	srand(time(NULL));
	for (int i = 0; i < 20; i++) //����
	{
		front[i] = 35;
		cout << front[i];
		if (i % 5 == 4)
		{
			cout << endl;
			Sleep(80);
		}
	}

	for (int i = 0; i < 20; i++) // ����
	{
		back[i] = '0' + i / 2;
	}

	for (int i = 0; i < 100; i++) //����
	{
		int shuffle = rand() % 20;
		int shuffle2 = rand() % 20;
		char temp = back[shuffle];
		back[shuffle] = back[shuffle2];
		back[shuffle2] = temp;
	}



	cout << "� ī�带 �������ðڽ��ϱ�?" << endl;
	Sleep(200);
	cin >> num;
	//���� �а� ���� �����ǰ� �ڵ� �ۼ�
	   //time �Լ��� �����Ǵ� �Լ��� 5�ʵ� Ǯ���� �ڵ� �ۼ�


  
   
        // ������ ī�带 ������ ������ ������Ʈ�ϰ� ���
        front[num - 1] = back[num - 1];

        if (num == 77)
        {
            for (int i = 0; i < 20; i++)
            {
                if (i != num - 1)

                switch (back[i])
                {
                case 0 + '0':
                    cout << "��";
                    break;
                case 1 + '0':
                    cout << "��";
                    break;
                case 2 + '0':
                    cout << "��";
                    break;
                case 3 + '0':
                    cout << "��";
                    break;
                case 4 + '0':
                    cout << "��";
                    break;
                case 5 + '0':
                    cout << "��";
                    break;
                case 6 + '0':
                    cout << "��";
                    break;
                case 7 + '0':
                    cout << "��";
                    break;
                case 8 + '0':
                    cout << "��";
                    break;
                case 9 + '0':
                    cout << "��";
                    break;
                default:
                    break;
                }
                if (i % 5 == 4)
                {
                    cout << endl;          
                }
            }

        }

        if (num == 78)
        {
            for (int i = 0; i < 18; i++)
            {
                if (i != num - 1)

                    switch (back[i])
                    {
                    case 0 + '0':
                        cout << "��";
                        break;
                    case 1 + '0':
                        cout << "��";
                        break;
                    case 2 + '0':
                        cout << "��";
                        break;
                    case 3 + '0':
                        cout << "��";
                        break;
                    case 4 + '0':
                        cout << "��";
                        break;
                    case 5 + '0':
                        cout << "��";
                        break;
                    case 6 + '0':
                        cout << "��";
                        break;
                    case 7 + '0':
                        cout << "��";
                        break;
                    case 8 + '0':
                        cout << "��";
                        break;
                    case 9 + '0':
                        cout << "��";
                        break;
                    default:
                        break;
                    }
                if (i % 5 == 4)
                {
                    cout << endl;
                }
            }

        }
        else {
            for (int i = 0; i < 20; i++)
            {
                if (i != num - 1)
                {
                    cout << front[i];
                }

                switch (front[i])
                {
                case 0 + '0':
                    cout << "��";
                    break;
                case 1 + '0':
                    cout << "��";
                    break;
                case 2 + '0':
                    cout << "��";
                    break;
                case 3 + '0':
                    cout << "��";
                    break;
                case 4 + '0':
                    cout << "��";
                    break;
                case 5 + '0':
                    cout << "��";
                    break;
                case 6 + '0':
                    cout << "��";
                    break;
                case 7 + '0':
                    cout << "��";
                    break;
                case 8 + '0':
                    cout << "��";
                    break;
                case 9 + '0':
                    cout << "��";
                    break;
                default:
                    break;
                }

                if (i % 5 == 4)
                {
                    cout << endl;
                }
            }
        }
    }

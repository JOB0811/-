#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

using std::cout;
using std::cin;
using std::endl;



/*
���� 3. ������

- ġƮ �ʼ�

�������̵� / 1 ~13������ ī��
�ߴ��̾� / 1 ~13������ ī��
����Ʈ / 1 ~13������ ī��
��Ŭ�ι� / 1 ~13 ������ ī��

������ 13���� ī�� = > �� 52���� ī�� ��� -> �迭

����ó�� -> ���� ó��
�� A = 1
�� J = 11
�� Q = 12
�� K = 13


- 52���� ī�带 �ּ� �ѹ� �������� ���� ���� ���ϸ��� 3�徿 �����´�.
������ ī�尡 3�� -> ���� 3�� -> ī��ѹ� 3�� -> �迭


- ���ʿ� ��ġ�� ������ ī�带 ���� �ּ� ���þ� �̻��� �ݾ��� ����  -> ������, ���ñ� = ����
�� �ּ� ���þ� : 1, 000 / ������ : 10, 000


- ���� �� ����° ī���� ���� �ռ� ���µ� ī�� ������ ���̿� �ִٸ� ���� �ݾ��� 10�谡 �Ǿ�
������ �߰� -> �� ���ǹ�

�ݴ��� �����ݿ��� ������ ��ŭ ���̳ʽ� -> else

�� �� ���� ������ ���� ī��� �������� �� �̻� ����� �� ����. -> ���� ī�带 ������� �������� ���� 

���� ���� ���� : �������� �� �������ų�, ī�尡 �� �������ų�.

���� ���� ����.
*/

void main()
{

    // ����
    int card[52];      //ī�� 52��
    int shape[3];      // ī���� 3��
    int number[3];      // ī�� ���� 3��
    int betting;      //���� �ݾ�
    int money = 10000;   //���� �ݾ�
    int turn = 0;      // ����� ī�� ���� �� -> �� ���Ӵ� 3�� ���� ������Ų��.
    int gameCount = 0;   // 52/3 => 17 ����
    srand(time(NULL));
    //�ʱ�ȭ 
    for (int i = 0; i < 52; i++)
    {
        card[i] = i;
    }
    //����
    for (int i = 0; i < 10000; i++) // 10000 = ���ñ�
    {
        //�����ڵ�
        int index1 = rand() % 52;
        int index2 = rand() % 52;
        int temp = card[index1];
        card[index1] = card[index2];
        card[index2] = temp;
    }

    // ����
    // for => 
    while (true)
    {
        // ġƮ
        system("cls");

        for (int i = 0; i < 3; i++)
        {
            shape[i] = card[turn + i] / 13;
            number[i] = card[turn + i] % 13;
            switch (shape[i])
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

            default:
                break;
            }
            switch (number[i])
            {
            case 1:
                cout << "A \t";
                break;
            case 11:
                cout << "J \t";
                break;
            case 12:
                cout << "Q \t";
                break;
            case 13:
                cout << "K \t";
                break;

            default:
                cout << number[i] + 1 << "\t";
                break;
            }
        }

        cout << endl;

        cout << "�� �ݾ�: " << money << endl;
        cout << "���� �Ͻÿ�." << endl;
        cin >> betting;

        if (betting < 100 || betting > money)
        {
            cout << "�ٽ� ��������." << endl;
            Sleep(500);
            continue;
        }

        // �������� ī�� ������ a < c �ΰ��, a> c�� ���
        // �� a < c < b, a> c > b
        // �� �ܿ��� ��� ���ٴ°� �ǹ��ϱ� ������ ��� out

        if ((number[0] < number[2] && number[2] < number[1]) ||
            (number[0] > number[2] && number[2] > number[1]))
        {
            cout << "ī�� ����: " << number[2] + 1 << endl;
            money += betting * 10;
            cout << betting * 10 << "�� ȹ��" << endl;
            Sleep(500);
        }
        else
        {
            cout << "ī�� ����: " << number[2] + 1 << endl;
            money -= betting;
            cout << betting << "�� ����" << endl;
            Sleep(500);
        }
        turn = turn + 3;
        gameCount++;
        if (gameCount == 17)
        {
            cout << "ī�尡 ����." << endl;
        }

        if (money < 100)
        {
            cout << "�ʴ� �����͸���" << endl;
            break;
        }
    }
}
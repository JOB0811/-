#include<iostream>
#include<time.h>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;

/*
����2.���� �߱�

0 ~9 ������ ������ ��ǻ�Ͱ� ���Ƿ� 3���� �̴´�.

��ǻ�Ͱ� ���� ���ڸ� �÷��̾ ������ ���� 3���� �����Ͽ� ���ڿ� �ڸ������� ���ߴ� ����
�� 1. ������ ���ڰ� ��ǻ�� ���ڿ� ������ �ڸ����� �ٸ� ��� = n��(B)
�� 2. ������ ���ڰ� ��ǻ�� ���ڿ� ���� �ڸ������� ���� ��� = n��Ʈ����ũ(S)
��. 3. �ش��ϴ� ���ڰ� ���ٸ� 1 �ƿ�(O)

- �̷��� ���Ͽ� 3S�� ������ ������� ������� ����� �����ָ� ������ ������.

- �ʼ� : ġƮ
�� �迭 X(�迭 ���� ���� �غ� ��)
*/


int main() {
    int playNum;
    int count = 0;
    int Ball = 0;
    int Strike = 0;
    int comNum, fnum, snum, tnum;

    do
    {
        srand(time(NULL));
        comNum = rand() % 1000;
        fnum = comNum / 100;
        snum = (comNum / 10) % 10;
        tnum = comNum % 10;

        if (fnum == 0)
        {
            continue;
        }
    } while (fnum == snum || fnum == tnum || snum == tnum);

    while (Strike < 3) {
        //cout << "ġƮ �ߵ�! ��ǻ�Ͱ� ������ ������" << fnum << snum << tnum << "�Դϴ�" << endl;
        cout << "���� �߱��� ���Ű� ȯ���մϴ�! ���ڸ� �Է��� �ּ���! : ";
        cout << "Strike : " << Strike << "   Ball : " << Ball << endl;
        cout << "count : " << count << endl;
        Ball = 0; // Ball ���� �ʱ�ȭ
        Strike = 0; // Strike ���� �ʱ�ȭ
        cin >> playNum;
        int countNum1 = playNum / 100;
        int countNum2 = (playNum / 10) % 10;
        int countNum3 = playNum % 10;

        if (countNum1 < 0 || countNum1 > 9 || countNum2 < 0 || countNum2 > 9 || countNum3 < 0 || countNum3 > 9) 
        {
            cout << "0���� 9������ ���ڸ� �����մϴ�." << endl;
            continue;
        }

        if (countNum1 == countNum2 || countNum1 == countNum3 || countNum2 == countNum3) 
        {
            cout << "�ߺ��� ���ڴ� �Է��� �� �����ϴ�!" << endl;
            continue;
        }

        if (countNum1 == fnum) 
        {
            Strike++;
        }
        if (countNum1 == snum || countNum1 == tnum) 
        {
            Ball++;
        }
        if (countNum2 == snum) 
        {
            Strike++;
        }
        if (countNum2 == fnum || countNum2 == tnum) 
        {
            Ball++;
        }
        if (countNum3 == tnum) 
        {
            Strike++;
        }
        if (countNum3 == fnum || countNum3 == snum) 
        {
            Ball++;
        }

        if (Strike == 3) {
            cout << "�����մϴ�! ���ӿ��� �¸��ϼ̽��ϴ�!" << endl;
            break;
        }

        count++;
    }

    return 0;
}
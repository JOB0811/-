#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "������.h" 

using std::cout;
using std::cin;
using std::endl;


void ����������() {
    int count = 0;
    int betting = 10000;
    int betMoney = 0;
    const int min = 1000;

    for (count = 0; count < 5; count++) {
        srand(time(NULL));
        int comnum = rand() % 3;

        if (betting <= 0) {
            cout << "�ǵ��� ��� �Ҿ� ������ ����˴ϴ�..�� �õ带 �ٽ� �������ּ���" << endl;
            break;
        }

        cout << "Ư�� �̺�Ʈ! ���� �̺�Ʈ�� �����غ�����!" << endl;
        cout << "���� ����� ��������" << betting << "�� �Դϴ�!" << endl;
        cout << "�ּ� ���ñ� �׼���" << min << "�� �Դϴ�" << ": ";

        cout << "�󸶸� �����Ͻðڽ��ϱ�? : ";
        cin >> betMoney;

        if (betting < betMoney) {
            cout << "�����ݺ��� ū���� ������ �� �����ϴ�!" << endl;
            continue;
        }

        int num;
        cout << "(0)���� (1)���� (2)�� �߿��� ���ڸ� �������ּ��� :" << endl;
        cin >> num;

        if (num < 0 || num > 2) {
            cout << "���������� �߿����� ������ �ּ���!" << endl;
            count--;
            continue;
        }

        switch (num) {
        case  0:
            if (comnum == 2) {
                cout << " �̰���ϴ�!" << endl;
                betting = betting + (betMoney * 3);
            }
            else if (comnum == 0) {
                cout << " �����ϴ�!" << endl;
                betting = betting + (betMoney * 5);
            }
            else {
                cout << " �����ϴ٤�" << endl;
                betting = betting - (betMoney * 7);
            }
            break;

        case 1:
            if (comnum == 0) {
                cout << "�̰���ϴ�!" << endl;
                betting = betting + (betMoney * 3);
            }
            else if (comnum == 1) {
                cout << " �����ϴ�!" << endl;
                betting = betting + (betMoney * 5);
            }
            else {
                cout << "�����ϴ٤�" << endl;
                betting = betting - (betMoney * 7);
            }
            break;

        case 2:
            if (comnum == 1) {
                cout << " �̰���ϴ�!" << endl;
                betting = betting + (betMoney * 3);
            }
            else if (comnum == 2) {
                cout << " �����ϴ�!" << endl;
                betting = betting + (betMoney * 5);
            }
            else {
                cout << " �����ϴ٤�" << endl;
                betting = betting - (betMoney * 7);
            }
            break;
        }
    }
}

int main() {
    int choice;
    cout << "������ �����ϼ���: " << endl;
    cout << "1. ����������" << endl;
    cout << "2. ������" << endl;
    cout << "����: ";
    cin >> choice;

    switch (choice) {
    case 1:
        ����������();
        break;
    case 2:
        ������ game;
        game.play();
        break;

        return 0;
    }
}
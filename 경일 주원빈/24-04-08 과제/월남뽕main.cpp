#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "월남뽕.h" 

using std::cout;
using std::cin;
using std::endl;


void 가위바위보() {
    int count = 0;
    int betting = 10000;
    int betMoney = 0;
    const int min = 1000;

    for (count = 0; count < 5; count++) {
        srand(time(NULL));
        int comnum = rand() % 3;

        if (betting <= 0) {
            cout << "판돈을 모두 잃어 게임이 종료됩니다..ㅠ 시드를 다시 충전해주세요" << endl;
            break;
        }

        cout << "특별 이벤트! 베팅 이벤트에 도전해보세요!" << endl;
        cout << "현재 당신의 소지금은" << betting << "원 입니다!" << endl;
        cout << "최소 배팅금 액수는" << min << "원 입니다" << ": ";

        cout << "얼마를 배팅하시겠습니까? : ";
        cin >> betMoney;

        if (betting < betMoney) {
            cout << "소지금보다 큰돈은 베팅할 수 없습니다!" << endl;
            continue;
        }

        int num;
        cout << "(0)가위 (1)바위 (2)보 중에서 숫자를 선택해주세요 :" << endl;
        cin >> num;

        if (num < 0 || num > 2) {
            cout << "가위바위보 중에서만 선택해 주세요!" << endl;
            count--;
            continue;
        }

        switch (num) {
        case  0:
            if (comnum == 2) {
                cout << " 이겼습니다!" << endl;
                betting = betting + (betMoney * 3);
            }
            else if (comnum == 0) {
                cout << " 비겼습니다!" << endl;
                betting = betting + (betMoney * 5);
            }
            else {
                cout << " 졌습니다ㅠ" << endl;
                betting = betting - (betMoney * 7);
            }
            break;

        case 1:
            if (comnum == 0) {
                cout << "이겼습니다!" << endl;
                betting = betting + (betMoney * 3);
            }
            else if (comnum == 1) {
                cout << " 비겼습니다!" << endl;
                betting = betting + (betMoney * 5);
            }
            else {
                cout << "졌습니다ㅠ" << endl;
                betting = betting - (betMoney * 7);
            }
            break;

        case 2:
            if (comnum == 1) {
                cout << " 이겼습니다!" << endl;
                betting = betting + (betMoney * 3);
            }
            else if (comnum == 2) {
                cout << " 비겼습니다!" << endl;
                betting = betting + (betMoney * 5);
            }
            else {
                cout << " 졌습니다ㅠ" << endl;
                betting = betting - (betMoney * 7);
            }
            break;
        }
    }
}

int main() {
    int choice;
    cout << "게임을 선택하세요: " << endl;
    cout << "1. 가위바위보" << endl;
    cout << "2. 월남뽕" << endl;
    cout << "선택: ";
    cin >> choice;

    switch (choice) {
    case 1:
        가위바위보();
        break;
    case 2:
        월남뽕 game;
        game.play();
        break;

        return 0;
    }
}
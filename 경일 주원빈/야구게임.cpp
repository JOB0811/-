#include<iostream>
#include<time.h>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;

/*
과제2.숫자 야구

0 ~9 까지의 숫자중 컴퓨터가 임의로 3개를 뽑는다.

컴퓨터가 뽑은 숫자를 플레이어가 임의의 숫자 3개를 선택하여 숫자와 자리수까지 맞추는 게임
ㄴ 1. 선택한 숫자가 컴퓨터 숫자와 같으니 자리수가 다른 경우 = n볼(B)
ㄴ 2. 선택한 숫자가 컴퓨터 숫자와 같고 자리수까지 같을 경우 = n스트라이크(S)
ㄴ. 3. 해당하는 숫자가 없다면 1 아웃(O)

- 이렇게 한턴에 3S를 만들경우 몇번만에 맞췄는지 결과를 보여주며 게임을 끝낸다.

- 필수 : 치트
ㄴ 배열 X(배열 쓰지 말고 해볼 것)
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
        //cout << "치트 발동! 컴퓨터가 생성한 난수는" << fnum << snum << tnum << "입니다" << endl;
        cout << "숫자 야구에 오신걸 환영합니다! 숫자를 입력해 주세요! : ";
        cout << "Strike : " << Strike << "   Ball : " << Ball << endl;
        cout << "count : " << count << endl;
        Ball = 0; // Ball 변수 초기화
        Strike = 0; // Strike 변수 초기화
        cin >> playNum;
        int countNum1 = playNum / 100;
        int countNum2 = (playNum / 10) % 10;
        int countNum3 = playNum % 10;

        if (countNum1 < 0 || countNum1 > 9 || countNum2 < 0 || countNum2 > 9 || countNum3 < 0 || countNum3 > 9) 
        {
            cout << "0부터 9사이의 숫자만 가능합니다." << endl;
            continue;
        }

        if (countNum1 == countNum2 || countNum1 == countNum3 || countNum2 == countNum3) 
        {
            cout << "중복된 숫자는 입력할 수 없습니다!" << endl;
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
            cout << "축하합니다! 게임에서 승리하셨습니다!" << endl;
            break;
        }

        count++;
    }

    return 0;
}
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

using std::cout;
using std::cin;
using std::endl;



/*
과제 3. 월남뽕

- 치트 필수

♠스페이드 / 1 ~13까지의 카드
◆다이아 / 1 ~13까지의 카드
♥하트 / 1 ~13까지의 카드
♣클로버 / 1 ~13 까지의 카드

종류별 13장의 카드 = > 총 52장의 카드 사용 -> 배열

예외처리 -> 추후 처리
ㄴ A = 1
ㄴ J = 11
ㄴ Q = 12
ㄴ K = 13


- 52장의 카드를 최소 한번 랜덤으로 섞고 그후 매턴마다 3장씩 뒤집는다.
나오는 카드가 3장 -> 문양 3번 -> 카드넘버 3번 -> 배열


- 앞쪽에 배치된 두장의 카드를 보고 최소 배팅액 이상의 금액을 배팅  -> 소지금, 배팅금 = 변수
ㄴ 최소 배팅액 : 1, 000 / 소지금 : 10, 000


- 배팅 후 세번째 카드의 수가 앞서 오픈된 카드 숫자의 사이에 있다면 배팅 금액의 10배가 되어
소지금 추가 -> 비교 조건문

반대라면 소지금에서 배팅한 만큼 마이너스 -> else

※ 한 턴이 끝나고 사용된 카드는 버려져서 더 이상 사용할 수 없다. -> 사용된 카드를 사용하지 않으려면 내부 

게임 종료 조건 : 소지금이 다 떨어지거나, 카드가 다 떨어지거나.

배팅 폭이 없음.
*/

void main()
{

    // 세팅
    int card[52];      //카드 52장
    int shape[3];      // 카드모양 3장
    int number[3];      // 카드 숫자 3장
    int betting;      //배팅 금액
    int money = 10000;   //보유 금액
    int turn = 0;      // 사용할 카드 버릴 놈 -> 한 게임당 3씩 턴을 증가시킨다.
    int gameCount = 0;   // 52/3 => 17 종료
    srand(time(NULL));
    //초기화 
    for (int i = 0; i < 52; i++)
    {
        card[i] = i;
    }
    //섞기
    for (int i = 0; i < 10000; i++) // 10000 = 베팅금
    {
        //셔플코드
        int index1 = rand() % 52;
        int index2 = rand() % 52;
        int temp = card[index1];
        card[index1] = card[index2];
        card[index2] = temp;
    }

    // 루프
    // for => 
    while (true)
    {
        // 치트
        system("cls");

        for (int i = 0; i < 3; i++)
        {
            shape[i] = card[turn + i] / 13;
            number[i] = card[turn + i] % 13;
            switch (shape[i])
            {
            case 0:
                cout << "♠";
                break;
            case 1:
                cout << "◆";
                break;
            case 2:
                cout << "♥";
                break;
            case 3:
                cout << "♣";
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

        cout << "총 금액: " << money << endl;
        cout << "배팅 하시오." << endl;
        cin >> betting;

        if (betting < 100 || betting > money)
        {
            cout << "다시 배팅하자." << endl;
            Sleep(500);
            continue;
        }

        // 보여지는 카드 두장중 a < c 인경우, a> c인 경우
        // ㄴ a < c < b, a> c > b
        // ㄴ 외에는 가운데 없다는걸 의미하기 때문에 모두 out

        if ((number[0] < number[2] && number[2] < number[1]) ||
            (number[0] > number[2] && number[2] > number[1]))
        {
            cout << "카드 숫자: " << number[2] + 1 << endl;
            money += betting * 10;
            cout << betting * 10 << "돈 획득" << endl;
            Sleep(500);
        }
        else
        {
            cout << "카드 숫자: " << number[2] + 1 << endl;
            money -= betting;
            cout << betting << "돈 소진" << endl;
            Sleep(500);
        }
        turn = turn + 3;
        gameCount++;
        if (gameCount == 17)
        {
            cout << "카드가 없다." << endl;
        }

        if (money < 100)
        {
            cout << "너는 빈털터리야" << endl;
            break;
        }
    }
}
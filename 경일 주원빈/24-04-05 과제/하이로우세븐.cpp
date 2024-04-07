#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// 세팅
int card[52];      
int shape[5];     
int number[5];     
int betting = 0;      
int turn = 0;  
int money = 10000;


void main()
{

   
    srand(time(NULL));
     
    for (int i = 0; i < 52; i++)
    {
        card[i] = i;
    }
    
    for (int i = 0; i < 10000; i++)
    {
   
        int index1 = rand() % 52;
        int index2 = rand() % 52;
        int temp = card[index1];
        card[index1] = card[index2];
        card[index2] = temp;
    }

    // 루프
    while (true)
    {
        // 치트
        system("cls");

        // 카드 5장 출력
        for (int i = 0; i < 5; i++)
        {
            shape[i] = card[turn + i] / 13;
            number[i] = card[turn + i] % 13;
            int sixCard = card[turn + i] % 13 + 1;
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
            case 0:
                cout << "A \t";
                break;
            case 10:
                cout << "J \t";
                break;
            case 11:
                cout << "Q \t";
                break;
            case 12:
                cout << "K \t";
                break;

            default:
                cout << number[i] + 1 << "\t";
                break;
            }
           
        }
        cout << "\n";
        int sixCard = card[turn + 5] % 13 + 1;

        cout << "소지금 : " << money << endl;
        cout << "얼마를 베팅하시겠습니까 ? : ";
        cin >> betting;

        if (betting > money || betting < 1000)
        {
            cout << "베팅금액은 베팅금보다 많거나 1000원보다 적을수 없습니다!" << endl;
            continue;
        }

        string predict;
        cout << "high, low, seven 중 예측하세요: ";
        cin >> predict;

        for (int i = 0; i < predict.length(); i++)
            predict[i] = tolower(predict[i]);

        if (predict != "high" && predict != "low" && predict != "seven")
        {
            cout << "잘못된 입력입니다. 다시 입력하세요." << endl;
            Sleep(300);
            continue;
        }

            int seven = 7;
            if (sixCard == seven && predict == "high")
            {
                cout << "정답! 배팅금 획득!" << endl;
                Sleep(300);
                money += betting;
                continue;
            }
            else if (sixCard < seven && predict == "low")
            {
                cout << "정답! 배팅금 획득!" << endl;
                Sleep(300);
                money += betting;
                continue;
            }
            else if (sixCard == seven && predict == "seven")
            {
                cout << "정답! 배팅금의 15배 획득!" << endl;
                Sleep(300);
                money += betting * 15;
                continue;
            }
            else
            {
                cout << "틀렸습니다. 배팅 금액을 잃었습니다." << endl;
                Sleep(300);
                money -= betting;

            }

            // 게임 종료 조건

            if (money < 1000)
            {
                cout << "베팅금이 부족합니다ㅠ 게임을 종료합니다." << endl;
                break;
            }
        }
}
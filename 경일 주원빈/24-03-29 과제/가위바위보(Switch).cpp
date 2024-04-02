#include<iostream>
#include<time.h>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;



/* 
과제1.가위바위보

- 스위치문을 이용하여 제작(조건문을 사용해도 되지만, 베이스가 스위치였으면 좋겠다)

- 치트 기능과 배팅 기능 추가
ㄴ 초기 소지금 : 10, 000원
ㄴ 최소 배팅 : 1, 000원

- 5판을 하거나 내가 가진 돈을 전부 잃으면 종료

- 이기면 판돈의 3배를 얻고, 지면 판돈의 7배를 잃도록 구현

- 비길경우 판돈의 5배를 얻는다.

*/


int num = 0; 
int count = 0;
int betting = 10000; // 소지금
int betMoney = 0; // 베팅금
const int min = 1000; // 최소 베팅금
const int R = 0;
const int S = 1;
const int P = 2;

void main() {

		for (count = 0; count < 5; count++) {
			
			srand(time(NULL));
			int comnum = rand() % 3;


			if (betting <= 0)
			{
				cout << "판돈을 모두 잃어 게임이 종료됩니다..ㅠ 시드를 다시 충전해주세요" << endl;
				break;
			}

			cout << "특별 이벤트! 베팅 이벤트에 도전해보세요!" << endl;
			cout << "현재 당신의 소지금은" << betting << "원 입니다!" << endl;
			cout << "최소 배팅금 액수는" << min << "원 입니다" << ": ";

			cout << "얼마를 배팅하시겠습니까? : ";
			cin >> betMoney;

			if (betting < betMoney)
			{
				cout << "소지금보다 큰돈은 베팅할 수 없습니다!" << endl;
				continue;
			}

			switch (comnum)
			{
			case 0:
			{
				cout << "치트 발동! 다음에 컴퓨터가 낼 패는 가위입니다.";
				break;
			}

			case 1:
			{
				cout << "치트 발동! 다음에 컴퓨터가 낼 패는 바위입니다.";
				break;
			}

			case 2:
			{
				cout << "치트 발동! 다음에 컴퓨터가 낼 패는 보입니다.";
				break;
			}
			}
			
			cout << "(0)가위 (1)바위 (2)보 중에서 숫자를 선택해주세요 :" << endl;
			cin >> num;
			

			if (num < 0 || num > 2)
			{
				cout << "가위바위보 중에서만 선택해 주세요!" << endl;
				count--;
				continue;
			}
			switch(num)
			{

			case  0:
				if (comnum == 2)
				{
					cout << " 이겼습니다!" << endl;
					betting = betting + (betMoney * 3);

				}
				else if (comnum == 0)
				{
					cout << " 비겼습니다!" << endl;
					betting = betting + (betMoney * 5);
				}
				else
				{
					cout << " 졌습니다ㅠ" << endl;
					betting = betting - (betMoney * 7);
				}
				break;

			case 1:
				if (comnum == 0)
				{
					cout << "이겼습니다!" << endl;
					betting = betting + (betMoney * 3);
				}
				else if (comnum == 1)
				{
					cout << " 비겼습니다!" << endl;
					betting = betting + (betMoney * 5);
				}
				else
				{
					cout << "졌습니다ㅠ" << endl;
					betting = betting - (betMoney * 7);
				}
				break;

			case 2:
				if (comnum == 1)
				{
					cout << " 이겼습니다!" << endl;
					betting = betting + (betMoney * 3);
				}
				else if (comnum == 2)
				{
					cout << " 비겼습니다!" << endl;
					betting = betting + (betMoney * 5);
				}
				else
				{
					cout << " 졌습니다ㅠ" << endl;
					betting = betting - (betMoney * 7);
				}
				break;

			}
		}


}
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#define cheat
using std::cin;
using std::cout;
using std::endl;

/*
과제2. 슬롯머신
	-777 같은 숫자가 3개 나올시 배팅금액의 12배
	- 7을 제외한 같은 숫자 3개 나올시 배팅금액 5배
	-같은 숫자 2개 나올시 배팅금액의 2배
	- 그외에는 배팅금액 잃기
	-기본 소지금 : 10,000원 / 최소 배팅 : 1,000/ 배팅 단위 : 1,000

	필수:
	1. 룰렛이 동작한는 모습을 ->시각화 해올것

	2. 배팅을 하고 내가 룰렛을 멈추지 않으면 룰렛은 자동으로 계속 반복한다.

	3. 치트가 활성화 되면 숫자 3개를 입력 받는다.
	ㄴ 치트로 입력된 숫자는 다음번 룰렛이 시동될떄 당첨되는걸 확인할 수 있게.

	//한줄조사
	- 노트에 적어온다. 문자열
	- 비유할것 생각해 온다.
	*/

int rullet[7] = { 1,2,3,4,5,6,7 };
int count = 0;
int betting = 10000;
int cheat1 = 0;

int num1 = 0;
int num2 = 0;
int num3 = 0;
int min = 1000;
int betMoney = 0;
void main()
{
	do {
		srand(time(NULL));
		num1 = rullet[rand() % 7];
		num2 = rullet[rand() % 7];
		num3 = rullet[rand() % 7];

		cout << "특별 이벤트! 베팅 이벤트에 도전해보세요!" << endl;
		cout << "현재 당신의 소지금은" << betting << "원 입니다!" << endl;
		cout << "최소 배팅금 액수는" << min << "원 입니다" << ": ";

		cout << "얼마를 배팅하시겠습니까? : ";
		cin >> betMoney;
		if (betMoney <= 0 || betMoney > betting)
		{
			cout << "0원 이하나 베팅금보다 많은 금액은 넣을 수 없습니다!";
			continue;
		}
		
	

	do {
			cout << "치트를 사용하시겠습니까? : ";
			cin >> cheat1;
			if (cheat1 == 1)
			{
#ifdef cheat

				cout << "치트사용! 원하는 숫자를 입력하면 룰렛의 숫자가 확정됩니다." << endl;
				cin >> num1;
				cin >> num2;
				cin >> num3;
#endif // cheat
			}

		} while ((num1 <= 0 || num1 > 9 || num2 <= 0 || num2 > 9 || num2 <= 0 || num2 > 9));


		while (true)
		{
			cout << rand() % 7 << rand() % 7 << rand() % 7;
			cout << "\b\b\b";
			Sleep(50);

			if (_kbhit())
			{
				_getch();
				break;
			}
		}


		cout << num1 << num2 << num3 << endl;

		if (num1 == num2 == num3 == 7)
		{
			cout << "도박에 천부적인 재능이 있으시군요!" << endl;
			cout << "럭키세븐에 성공하셨습니다! 베팅금 12배를 획득합니다!" << endl;
			betting = betting + betMoney * 12;
		}

		else if (num1 == num2 == num3 && num1 == num2 == num3 != 7)
		{
			cout << "타짜의 기운이 느껴집니다!" << endl;
			cout << "같은 숫자 3번에 성공하셨습니다! 배팅금 5배를 획득합니다!" << endl;
			betting = betting + betMoney * 5;
		}

		else if (num1 == num2 || num1 == num3 || num2 == num3)
		{
			cout << "배팅성공!" << endl;
			cout << "배팅에 성공해 배팅금을 2배 얻으셨습니다!" << endl;
			betting = betting + betMoney * 2;
		}

		else
		{
			cout << "감정적인 도박은 패망의 지름길입니다." << endl;
			cout << "룰렛에 실패해 베팅금을 잃으셨습니다ㅠ" << endl;
			betting = betting - betMoney;
		}
	} while (betting > 0);
}



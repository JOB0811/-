#include<iostream>
#include<stdlib.h>
#include<time.h>

using std::cout;
using std::cin;
using std::endl;
/*
(배열, 반복문, 조건문을 주로 사용해서 제작.)
(당첨 번호는 같은 숫자가 나와선 안된다/사용자 입력 숫자도 같은 숫자가 나오면 안된다.)
과제2.로또 당첨기

- 당첨 번호 6개 + 보너스 번호 1개

- 6개 입력

- 1등 : 당첨 번호 6개와 내가 입력한 6개의 숫자가 같을때.

- 2등 : 당첨 번호 5개 + 보너스번호 1개와 내가 입력한 6개 숫자가 일치할때

- 3등 : 당첨 번호 5개와 내가 입력한 5개의 숫자가 같을때

- 4등 : 당첨번호 4개와 내가 입력한 4개의 숫자가 같을때

- 5등 : 당첨번호 3개와 내가 입력한 3개의 숫자가 같을때
*/

int lucky[6];  // 컴퓨터 난수 생성 저장
int lottoNum[6]; // 사용자 지정 숫자 저장
int bonusNum = 0; // 보너스 번호
int j = 0;
bool dupliLucky;
bool dupliNum;
int count = 0;



void main()
{
	srand(time(NULL));
	for (int i = 0; i < 6; i++)
	{
		do {
			dupliLucky = false;
			lucky[i] = rand() % 43 + 1;
			bonusNum = rand() % 43 + 1;
			for (int j = 0; i > j; j++)
				if (lucky[i] == lucky[j])
				{
					cout << "당첨번호중에 중복 숫자가 생성되어 다시 생성하겠습니다!" << endl;
					dupliLucky = true;
					continue;
				}
				if (lucky[i] == bonusNum)
				{
					cout << "보너스 번호와 당첨번호가 중복되어 다시 생성하겠습니다!" << endl;
					dupliLucky = true;
					continue;
				}

			} while (dupliLucky);
		}

	cout << "이번 로또 당첨 추첨 번호 입니다!" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << lucky[i] << " ";
	}
	cout << "\n";
	cout << "보너스 번호 : " << bonusNum << endl;
	cout << "로또 당첨을 시작하겠습니다! 사용자가 원하는 번호를 입력해주세요 :" << endl;
	for (int i = 0; i < 6; i++)
	{
		do {
			dupliNum = false;
			cin >> lottoNum[i];
			for (int j = 0; i > j; j++)
				if (lottoNum[i] == lottoNum[j])
				{
					cout << "중복된 숫자는 입력할 수 없습니다! 다시 입력하세요!" << endl;
					dupliNum = true;
					break;
				}
		} while (dupliNum);

		if (lottoNum[i] <= 0 || lottoNum[i] > 44)
		{
			cout << "로또 숫자의 범위는 0부터 44까지입니다! 다시 입력해주세요" << endl;
			continue;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (lucky[i] == lottoNum[j])
			{
				count++;
			}
		}
	}

	switch (bonusNum)
	{
	case 1:
		if (count == 5)
		{
			cout << "축하합니다! 2등입니다!";
		}
		break;

	default:
		if (count == 6)
		{
			cout << "축하합니다! 1등입니다!";
		}

		else if (count == 5)
		{
			cout << "축하합니다! 3등입니다!";
		}

		else if (count == 4)
		{
			cout << "축하합니다! 4등입니다!";
		}

		else if (count == 3)
		{
			cout << "축하합니다! 5등입니다!";
		}
		break;
	}
}




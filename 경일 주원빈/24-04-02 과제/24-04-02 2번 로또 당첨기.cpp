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

int lucky[7];  // 컴퓨터 난수 생성 저장
int lottoNum[7]; // 사용자 지정 숫자 저장
int bonusNum = 0; // 보너스 번호





void main()
{
	srand(time(NULL));
		for (int i = 0; i < 7; i++)
		{
			lucky[i] = rand() % 45;
			int j = i - 1;
			while(lucky[i] == 0)
			if (lucky[i] == 0)
			{
				cout << "당첨 번호중에 0이 포함되어 다시 생성하겠습니다!" << endl;
				continue;
			}
			if (lucky[i] == lucky[j])
			{
				cout << "당첨번호중에 중복 숫자가 생성되어 다시 생성하겠습니다!" << endl;
				continue;
			}
		}
		cout << "로또 당첨을 시작하겠습니다! 사용자가 원하는 번호를 입력해주세요 :" << endl;
		for (int i = 0; i < 7; i++)
		{
			cin >> lottoNum[i];
			if (lottoNum[i] <= 0 || lottoNum[i] > 44)
			{
				cout << "로또 숫자의 범위는 0부터 44까지입니다! 다시 입력해주세요" << endl;
					continue;
			}
		}

		bonusNum = rand() % 45;

		cout << "이번 로또 당첨 추첨 번호 입니다!" << endl;
		for (int i = 0; i < 7; i++)
		{
			 cout << lucky[i] << " ";
		}
		for (int i = 0; i < 7; i++)
		{
			if (lucky[0] == lottoNum[0] && lucky[1] == lottoNum[1] && lucky[2] == lottoNum[2] && lucky[3] == lottoNum[3] && lucky[4] == lottoNum[4] && lucky[5] == lottoNum[5] && lucky[6] == lottoNum[6])
			{
				cout << "1등에 당첨되셨습니다! 축하합니다!" << endl;
					break;
			}
		}





}
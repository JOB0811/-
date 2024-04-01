#include<iostream>
#include<stdlib.h>
#include<time.h>

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

int rullet[7];
int count = 0;


void main()
{
	srand(time(NULL));

	for (int i = 0; i < 7; i++)
	{
		rullet[i] = rand() % 7;
	}
	cout << rullet << endl;

}



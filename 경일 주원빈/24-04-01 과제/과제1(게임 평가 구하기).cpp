#include<iostream>
#include<time.h>
#include<stdlib.h>

using std::cout;
using std::cin;
using std::endl;


int point[6] = { 5,3,2,3,5,5 };
int point2[6];
float ave1, ave2 = 0;
float ave3, ave4 = 0;

void main()

{
	cout << "게임 1의 평균 점수는? " << endl;
	for (int i = 0; i <= 5; i++)
	{
		ave1 += point[i];
	}
	ave2 = ave1 / 6;
	cout << ave2 << endl;



	cout << "게임 2의 평균 점수는 여러분이 만듭니다! 점수를 입력해 주세요!" << endl;
	for (int i = 0; i <= 5; i++)
	{
		cin >> point2[i];
		ave3 += point2[i];
	}
	ave4 = ave3 / 6;
	cout << ave4 << endl;

}





/*

과제1. 게임 평가값 구하기(평균)
	-항목은 6가지
	-게임 평가: 캐릭터/배경/퀘스트/아이템/과금력/레이드 등등...
	-조건: 1차원 배열로 값을 정하고 평균값을 구해서 출력.
		   1차원 배열로 값을 세팅하고 내가 값을 입력하면 평균값을 구해서 출력한다.



*/
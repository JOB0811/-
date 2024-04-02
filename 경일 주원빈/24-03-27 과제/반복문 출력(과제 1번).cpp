#include<iostream>


/*

과제 1. 반복문 출력

for / while / do ~ while문 (3가지 조건/반복문 1번씩 사용하기)

- 20에서 1까지 출력

- 1부터 20까지 출력
ㄴ 짝수만

*/

/*
결과물 생각후 역으로 도출해서 고려하기

20~1 (짝수)
1~20 (짝수)
어떻게 나와야 하지?

20 19 18 17 16 15 14 13 12 11..

2 4 6 8 10 12 14 16 18 20 ( 규칙 : 2에서 2를 더하는게 "반복"됨)
짝수만 출력하려면 어떻게 해야함?
1,2,3,... 20까지 나오는 거에서
1,3,5..를 거르려면?
반복문이 진행되기전에 홀수값을 저장하고 있는 변수를 빼면 짝수값만 남는다?



*/

using std::cout;
using std::cin;
using std::endl;


void main()
{
	int i = 20;
	int j = 20;

	while (i > 0)
	{
		cout << i << endl;
		i--;

	};

	printf("\n");

	do
	{
		cout << j << endl;
		j--;
	} while (j > 0);

	printf("\n");


	for (int k = 20; k > 0; k--)
	{
		cout << k << endl;
	}

	printf("\n");



	int num0 = 2;

	while (num0 <= 20)
	{
		cout << num0 << endl;
		num0++;
		num0++;

	}

	printf("\n");


	int num1 = 2;
	do
	{
		cout << num1 << endl;
		num1++;
		num1++;

	} while (num1 <= 20);

	printf("\n");

	for (int numA = 2; numA <= 20; numA++) {
		cout << numA << endl;
		numA++;
	}








}
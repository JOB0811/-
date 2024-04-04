#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

using std::cin;
using std::cout;
using std::endl;


/*
과제 1. 짝 맞추기

- 노 클래스

- 사이즈 : 5 x 4

- ☆ ★/ ◇ ◆/ ♤ ♠/ ♡ ♥/ ♧ ♣
배열 -> 색있는것 없는것 구별
+ 다른 문자로 표시될 배열
4개

- 아스키 코드를 이용해서 구현하면 좀 더 쉬울 것이다. (아스키 코드는 쓸때만 검색해서 참고하라.(안 외워도 됨)) (못써도 괜찮다)

- 짝이 맞춰진 번호는 계속 오픈된 상태로 유지해야 한다.
if or switch로 조건 달성 시, while문으로 계속 UI에 표기되게



#define으로 치트1 매크로 달성시, 감춘 패가 전부 공개되게 코드 작성
time 함수로 유지되는 함수에 5초뒤 풀리게 코드 작성
- 2가지 버전으로 치트를 만들어 온다.
-#define으로 치트2 매크로 달성시,
	ㄴ 1. 치트키를 누르면 패를 전부 오픈시켜 플레이어에게 보여주고 5초뒤에
		  다시 원상 복귀
	ㄴ 2. 치트키를 누르면 한쌍의 카드를 제외하고 전부 오픈
		  이후 사용자가 마지막 한상을 맞추면서 게임이 종료되면 OK


- if 문을 통해 cin으로 키를 입력받으면 일정시간 sleep후 continue;하게 작성
- 종료된 게임에서 재시작하기 기능을 추가할 것

- 월남뽕 과제에서 어려움을 느꼈던 인원은 월남뽕 해설코드를 유의깊게 살펴보고,
비슷한 기능들이 있으므로 어떤식으로 바꿔서 쑤셔넣을지 잘 고민해보자.


※ 과제 유무에 따라서 깜지 없음.



타임 어택. 월남뽕

- 시간은 10분



한줄 조사. 상속

- 비유할것 생각해 온다.
ㄴ 딥하면 그냥 빠지도록

- 노트에 적어온다.
*/

int shape1[10]; // 색이 없는 문양
int shape2[10]; // 색이 있는 문양
int shapeFair[20]; //문양을 섞은뒤 저장할 덱
int mtShape = 0; // 맞출시, 유지시킬 문양




void main()
{
	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		shapeFair[i] = i;
	}

	for (int i = 0; i < 10000; i++)
	{
		//셔플
		int index1 = rand() % 20;
		int index2 = rand() % 20;
		int temp = shapeFair[index1];
		shapeFair[index1] = shapeFair[index2];
		shapeFair[index2] = temp;
	}




	for (int i = 0; i < 2; i++)
	{
		shape1[i] = shapeFair[mtShape + 1] / 5;


		switch (shape1[i])
		{
		case 0:
			cout << "☆";
			break;
		case 1:
			cout << "◇";
			break;
		case 2:
			cout << "♤";
			break;
		case 3:
			cout << "♡";
			break;
		case 4:
			cout << "♧";
			break;

		}

	}

	for (int i = 0; i < 2; i++)
	{
		shape2[i] == shapeFair[mtShape + 1] / 2;

		switch (shape2[i])
		{
		case 0:
			cout << "★";
			break;
		case 1:
			cout << "◆";
			break;
		case 2:
			cout << "♠";
			break;
		case 3:
			cout << "♥";
			break;
		case 4:
			cout << "♣";
			break;
		}
	}
}



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

char front[20]; // 앞판
char back[20]; // 뒷판
int num;




void main()
{

	srand(time(NULL));
	for (int i = 0; i < 20; i++) //앞판
	{
		front[i] = 35;
		cout << front[i];
		if (i % 5 == 4)
		{
			cout << endl;
			Sleep(80);
		}
	}

	for (int i = 0; i < 20; i++) // 뒷판
	{
		back[i] = '0' + i / 2;
	}

	for (int i = 0; i < 100; i++) //셔플
	{
		int shuffle = rand() % 20;
		int shuffle2 = rand() % 20;
		char temp = back[shuffle];
		back[shuffle] = back[shuffle2];
		back[shuffle2] = temp;
	}



	cout << "어떤 카드를 뒤집으시겠습니까?" << endl;
	Sleep(200);
	cin >> num;
	//감춘 패가 전부 공개되게 코드 작성
	   //time 함수로 유지되는 함수에 5초뒤 풀리게 코드 작성


  
   
        // 선택한 카드를 뒤집어 앞판을 업데이트하고 출력
        front[num - 1] = back[num - 1];

        if (num == 77)
        {
            for (int i = 0; i < 20; i++)
            {
                if (i != num - 1)

                switch (back[i])
                {
                case 0 + '0':
                    cout << "☆";
                    break;
                case 1 + '0':
                    cout << "★";
                    break;
                case 2 + '0':
                    cout << "◇";
                    break;
                case 3 + '0':
                    cout << "◆";
                    break;
                case 4 + '0':
                    cout << "♤";
                    break;
                case 5 + '0':
                    cout << "♠";
                    break;
                case 6 + '0':
                    cout << "♡";
                    break;
                case 7 + '0':
                    cout << "♥";
                    break;
                case 8 + '0':
                    cout << "♧";
                    break;
                case 9 + '0':
                    cout << "♣";
                    break;
                default:
                    break;
                }
                if (i % 5 == 4)
                {
                    cout << endl;          
                }
            }

        }

        if (num == 78)
        {
            for (int i = 0; i < 18; i++)
            {
                if (i != num - 1)

                    switch (back[i])
                    {
                    case 0 + '0':
                        cout << "☆";
                        break;
                    case 1 + '0':
                        cout << "★";
                        break;
                    case 2 + '0':
                        cout << "◇";
                        break;
                    case 3 + '0':
                        cout << "◆";
                        break;
                    case 4 + '0':
                        cout << "♤";
                        break;
                    case 5 + '0':
                        cout << "♠";
                        break;
                    case 6 + '0':
                        cout << "♡";
                        break;
                    case 7 + '0':
                        cout << "♥";
                        break;
                    case 8 + '0':
                        cout << "♧";
                        break;
                    case 9 + '0':
                        cout << "♣";
                        break;
                    default:
                        break;
                    }
                if (i % 5 == 4)
                {
                    cout << endl;
                }
            }

        }
        else {
            for (int i = 0; i < 20; i++)
            {
                if (i != num - 1)
                {
                    cout << front[i];
                }

                switch (front[i])
                {
                case 0 + '0':
                    cout << "☆";
                    break;
                case 1 + '0':
                    cout << "★";
                    break;
                case 2 + '0':
                    cout << "◇";
                    break;
                case 3 + '0':
                    cout << "◆";
                    break;
                case 4 + '0':
                    cout << "♤";
                    break;
                case 5 + '0':
                    cout << "♠";
                    break;
                case 6 + '0':
                    cout << "♡";
                    break;
                case 7 + '0':
                    cout << "♥";
                    break;
                case 8 + '0':
                    cout << "♧";
                    break;
                case 9 + '0':
                    cout << "♣";
                    break;
                default:
                    break;
                }

                if (i % 5 == 4)
                {
                    cout << endl;
                }
            }
        }
    }

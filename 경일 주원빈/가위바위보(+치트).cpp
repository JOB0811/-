#include<iostream>
#include<time.h>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;


//과제 작성 시, 포함해 봐야 할 내용 1. 가위, 바위, 보의 기능을 탑재한 함수 별도 생성, 같은 변수 생성시 사용할 네임스페이스 활용해보기

/*

과제1.가위바위보 게임(다음주 월요일에 하게 될 것의 연계이므로 최대한 간결하게 코딩해보기.)


- if문을 이용해 만든다.
ㄴ switch 사용하지 말것

- 게임의 진행 횟수는 총 5판
ㄴ 이후는 게임 종료

- 필수 : 치트(컴퓨터가 무슨 선택지(가위, 바위, 보)중 어떤 것을 낼지 사용자에게 미리 알려주고 확정적으로 이길수 있게 만드는 것.


콘솔 진행 순서?
1. 사용자에게 문자열을 입력 받는다. (총 5번)
2.




*/

int num = 0;
int count = 0;
int Rsp();
const int R = 0;
const int S = 1;
const int P = 2;

void main() {
	cout << "(0)가위 (1)바위 (2)보 중에서 숫자를 선택해주세요 :";


	for(count = 0; count <= 5; count++)
	{
		srand(time(NULL));
		int com = rand() % 3;

		if (num < 0 || num > 2)
		{
			cout << "해당하는 숫자를 다시 입력해주세요!" << endl;
		}


		cout << "3가지 중에서 뭘 낼지 선택해 주세요 :" << endl;
		cin >> num;

		if (num == 0) {
			if (com == 2) {
				cout << "이겼습니다! 축하합니다" << endl;
			}
			else {
				cout << "컴퓨터가 이겼습니다!" << endl;
			}
		}
		if (num == com)
		{
			cout << "비겼습니다!" << endl;
		}

		if (num == 1) {
			if (com == 0) {
				cout << "이겼습니다! 축하합니다" << endl;
			}
			else {
				cout << "컴퓨터가 이겼습니다!" << endl;
			}

			if (num == 2) {
				if (com == 1) {
					cout << "이겼습니다! 축하합니다" << endl;
				}
				else {
					cout << "컴퓨터가 이겼습니다!" << endl;
				}
			}

			count++;
		}
	}
}











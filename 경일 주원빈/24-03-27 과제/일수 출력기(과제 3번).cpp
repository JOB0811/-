#include<iostream>

using std::cout;
using std::cin;
using std::endl;


/*

과제 3. 일수 출력기

- if문과 switch문 중에 본인이 판단해 효율적인 것을 선택할 것.

- 시작하면 사용자의 입력을 받고 입력한 숫자에 따라 ??일인지 출력하면 된다.

EX) 4를 입력 시 -> 4월은 30일까지 있습니다. -> 다시 커맨드 활성화

- 1월 ~12월까지 확인이 가능해야 하고 이외의 숫자는 예외처리

- 총 5번을 입력하면 프로그램은 종료된다.


1. 숫자를 사용자한테 입력을 받고
2. 그 입력받은 숫자에서 내제하고 있는 메세지 or 값을 출력을 띄우고
3. 다시 반복문 or 조건문 초기화면으로 돌아와서 숫자를 입력받는다. x5
4. + 정해진 조건을 충족하면 그만두기




*/


int main() {

	int month = 0;
	int count = 0;

	cout << "보고 싶은 달의 숫자를 입력하세요 : ";


	do {
		cin >> month;
		switch (month) {

		case 1:
			cout << "1월은 31일까지입니다." << endl;
			break;
		case 2:
			cout << "2월은 28일까지 있으며, 윤년은 29일까지입니다." << endl;
			break;
		case 3:
			cout << "3월은 31일까지입니다." << endl;
			break;
		case 4:
			cout << "4월은 30일까지입니다." << endl;
			break;
		case 5:
			cout << "5월은 31일까지입니다." << endl;
			break;

		case 6:
			cout << "6월은 30일까지입니다." << endl;
			break;

		case 7:
			cout << "7월은 31일까지입니다." << endl;
			break;

		case 8:
			cout << "8월은 31일까지입니다." << endl;
			break;

		case 9:
			cout << "9월은 30일까지입니다." << endl;
			break;

		case 10:
			cout << "10월은 31일까지입니다." << endl;
			break;

		case 11:
			cout << "11월은 30일까지입니다." << endl;
			break;

		case 12:
			cout << "12월은 31일까지입니다." << endl;
			break;


		default:
			cout << "해당하는 월이 존재하지 않습니다. 다시 입력하세요." << endl;
			break;
		}

		count++;


		if (count >= 5) {
			cout << "입력횟수가 5회에 도달하였습니다. 프로그램을 종료합니다.";
			break;
		}
		cout << "보고 싶은 월의 숫자를 다시 입력해주세요 :";

	} while (count < 5);



}
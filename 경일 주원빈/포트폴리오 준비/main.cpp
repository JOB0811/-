#include "runGameSelect.h"
#include "key.h"
//#include "gamePlay.h"
//#include "gamePlay.cpp"
#include<iomanip>

int choice;


void main()
{
	runGameSelect runTitle;
	void (runGameSelect:: * RunGameSelect)() = &runGameSelect::RunGameSelect; // 멤버 함수 포인터 선언

	(runTitle.*RunGameSelect)(); // 멤버 함수 포인터를 통해 멤버 함수 호출

	runTitle.textColor(15, 0);
	runTitle.gotoXy(35, 20);

	cout << "게임 시작";
	runTitle.gotoXy(35, 21);
	cout << "게임 종료";

	runTitle.among();


	while (true)
	{
		key enterkey;
		enterkey.keyControl();


		{

			runTitle.gotoXy(35, 22);
			choice = enterkey.keyControl();
			system("cls");

			switch (choice) {
			case KB_UP:
				cout << "게임을 시작합니다" << endl;
				system("cls");
				/*DrawGround(5);*/
				//게임 페이지 작성 후 넣기
				break;
			case KB_DOWN:
				cout << "게임을 종료합니다" << endl;
				exit(0);
			default:
				cout << "다른 키를 입력하세요." << endl;
				break;
			}
		}
	}
}
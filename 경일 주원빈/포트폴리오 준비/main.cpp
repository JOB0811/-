#include "runGameSelect.h"
#include "picture.h"
#include "key.h"
#include<iomanip>

int choice;

void main()
{
	runGameSelect runTitle;
	void (runGameSelect:: * RunGameSelect)() = &runGameSelect::RunGameSelect;

	(runTitle.*RunGameSelect)();

	runTitle.textColor(15, 0);
	runTitle.gotoXy(35, 20);
	cout << "게임 시작";
	runTitle.gotoXy(35, 21);
	cout << "게임 종료";

	runTitle.among();

	key enterkey;
	picture pic;

	while (true)
	{
		runTitle.gotoXy(35, 22);
		choice = enterkey.keyControl();

		switch (choice) {
		case KB_UP:
			cout << "게임을 시작합니다" << endl;
			pic.penStand();
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
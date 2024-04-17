#include "runGameSelect.h"


void main()
{
	runGameSelect runTitle;
	runTitle.runTitle();

	gotoXy(35, 27);
	cout << "게임 시작" << endl;
	cout << "게임 종료" << endl;
}